#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float amount, rate, interest , time , ci, a;
    cout<< " type the amount : ";
    cin >> amount ;
    cout<< " type the interest rate : ";
    cin>> rate;

    cout<< " type the period in years : ";
    cin>> time;

    interest = 1+ (rate/100);
    ci =1;
    ci = pow(interest, time);
    ci = amount *  ci - amount;

    cout<< " your compound interest is : "<< ci;
    return 0;
}