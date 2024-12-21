#include <iostream>
#include <math.h>
// code only works for numbers with three digits 
using namespace std;

int main(){

    int num, last, first, temp, swap, count = 0;

    cout<< " enter a number : ";
    cin>> num;

    temp = num;
    last = temp%10;
    count = (int)log10(temp);
    while(temp>=10){
        temp/=10;

    }

    first = temp;
    swap = (last * pow(10, count) + first) + (num - (first * pow(10, count) + last));

    cout<< " last digit "<< last<< endl;
    cout<< " first digit "<< first<< endl;
    cout<< num << " is swapped to "<<swap;

    return 0;


}