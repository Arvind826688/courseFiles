#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <set>
#include <omp.h>
#include <cuda_runtime.h>
#include <boost/multiprecision/cpp_int.hpp> // Boost library for handling super large numbers

using namespace std;
using namespace boost::multiprecision;

const string FILENAME = "Prime.csv";

// CUDA kernel for marking non-prime numbers
__global__ void markNonPrimes(bool *segment, long long segment_size, long long base, long long start, long long prime) {
    long long index = threadIdx.x + blockIdx.x * blockDim.x;
    if (index >= segment_size) return;

    long long current = start + index;
    if (current % prime == 0 && current >= prime * prime) {
        for (long long multiple = current; multiple < start + segment_size; multiple += prime) {
            segment[multiple - start] = false;
        }
    }
}

// Function to write primes to the file
void writePrimesToFile(const vector<cpp_int> &primes, set<cpp_int> &primesInFile) {
    ofstream file(FILENAME, ios::app);
    if (file.is_open()) {
        for (const auto &prime : primes) {
            if (primesInFile.find(prime) == primesInFile.end()) {
                file << prime << "\n";
                primesInFile.insert(prime);
            }
        }
        file.close();
    }
}

// Helper function to generate small primes up to sqrt(end) using the basic sieve
vector<long long> generateSmallPrimes(long long limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (long long i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (long long j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<long long> primes;
    for (long long i = 2; i <= limit; ++i) {
        if (isPrime[i]) primes.push_back(i);
    }

    return primes;
}

// Function to perform the segmented sieve and find primes in a range
void segmentedSieve(cpp_int start, cpp_int end) {
    cpp_int range = end - start + 1;
    const long long CHUNK_SIZE = 1000000; // Chunk size to process in smaller parts

    // Generate small primes up to sqrt(end)
    long long sqrtEnd = sqrt(end.convert_to<double>());
    vector<long long> smallPrimes = generateSmallPrimes(sqrtEnd);

    set<cpp_int> primesInFile;

    // Load previously written primes from file
    ifstream infile(FILENAME);
    if (infile.is_open()) {
        cpp_int num;
        while (infile >> num) {
            primesInFile.insert(num);
        }
        infile.close();
    }

    // Process range in chunks
    #pragma omp parallel for schedule(dynamic)
    for (cpp_int chunk_start = start; chunk_start <= end; chunk_start += CHUNK_SIZE) {
        cpp_int chunk_end = min(chunk_start + CHUNK_SIZE - 1, end);

        vector<bool> segment(chunk_end - chunk_start + 1, true);

        // Mark non-primes in the segment using small primes
        for (long long prime : smallPrimes) {
            cpp_int firstMultiple = max(prime * prime, (chunk_start + prime - 1) / prime * prime);
            for (cpp_int j = firstMultiple; j <= chunk_end; j += prime) {
                segment[j - chunk_start] = false;
            }
        }

        // Collect primes from the segment
        vector<cpp_int> primes;
        for (cpp_int i = chunk_start; i <= chunk_end; ++i) {
            if (segment[i - chunk_start]) {
                primes.push_back(i);
            }
        }

        // Write primes to file
        #pragma omp critical
        {
            writePrimesToFile(primes, primesInFile);
        }
    }
}

int main() {
    cpp_int start, end;

    cout << "Enter the range to find primes (start and end): ";
    cin >> start >> end;

    if (start < 0 || start > end) {
        cerr << "Invalid range. Start should be >= 0 and start <= end." << endl;
        return 1;
    }

    segmentedSieve(start, end);

    cout << "Prime numbers between " << start << " and " << end << " have been written to " << FILENAME << "." << endl;

    return 0;
}
