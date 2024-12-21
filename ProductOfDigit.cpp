#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num, product=1;

    cout<< " enter any numer : ";
    cin>> num;

    while(num!=0){
        product = product * (num%10);
        num = num / 10;
    }

    cout<< " product of digits : "<< product;

    return 0;
}