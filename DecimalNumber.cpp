#include <iostream>
#include <math.h>

using namespace std;

long long convertDecimalToBinary(int n);

int main(){
    int n, binaryNumber;
    cout<< " enter a deciaml number : ";
    cin>> n;
    binaryNumber = convertDecimalToBinary(n);
    cout<< n<< " in deciaml = " << binaryNumber<< " in binary " << endl;

    return 0;
}

long long convertDecimalToBinary(int n){

    long long binaryNumber = 0;
    int remainder, i=1, step =1;

    while(n!=0){
        remainder = n%2;
        cout<< " step " << step++ << " : "<< n << "/2 , remainder  = "<< remainder << " , quotient = "<< n/2<< endl;
        n/=2;
        binaryNumber += remainder*i;

        i*=10;
        
    }
    return binaryNumber;

}