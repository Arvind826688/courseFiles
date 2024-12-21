#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int base, exponent, power, i;
    cout<< " enter base : ";
    cin>> base;

    cout<< " enter exponent : ";
    cin>> exponent;
    power = 1;
    i =1; 

    while(i<=exponent){
        power = power * base;
        i++;
    }
    cout<< "power of "<< base<< " is : "<< power;


    return 0;
}