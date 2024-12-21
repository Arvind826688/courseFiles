// finding all prime numbers between two numbers 

#include <iostream>
using namespace std;

int isPrime(int num);
void PrintPrimes(int lower, int upper);

int main(){
    int lower, upper;
    cout<< " enter lower and upper limit  to list the primes : ";
    cin>> lower>> upper ;

    PrintPrimes(lower, upper);
    return 0;

}

void PrintPrimes(int lower, int upper){
    cout<< " list of prime numbers between "<< lower << " and " << upper <<endl;

    while (lower<=upper){
        if(isPrime(lower)){
            cout<<lower<<endl;
        }
        lower++;

    }
}

int isPrime(int num){
    int i;
    for(i=2; i<=num/2; i++ )
    {
        if(num%i==0){return 0;}

    }
    return 1;
}