#include <iostream>
#include <math.h>

using namespace std;

int ConvertBinaryToDecimal(long long n);

int main(){
    long long n;
    cout<< " enter a binary number :";
    cin>> n;

    cout<< n<< " in binary "<< ConvertBinaryToDecimal(n)<< " in decimal ";
    return 0;
}

int ConvertBinaryToDecimal(long long n){
    int decimalNumber = 0, i = 0, remainder;
    while(n!=0){
        remainder = n%10;
        n/=10;
        decimalNumber += remainder*pow(2, i);
        ++i;
    }
    return decimalNumber;
}