#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int num, i;
    long long fact=1;

    cout<< " enter any number to calculate factorial : ";
    cin>> num;

    fact = 1;
    i =1;

     while(i<=num){
        fact = fact* i;
        i++;

     }

     cout<< " factorial of "<< num << " is : "<< fact;
     return 0;
}