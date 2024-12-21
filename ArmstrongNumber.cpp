#include <iostream>
#include <math.h>


// an armstrong number is an n -digit number that is equal to the sum of the nth powers of its digits
using namespace std;

int main(){
    
    int num , sum = 0, i , r;

    cout<< " enter any number to calculate armstrong number : ";
    cin>> num;

    for(i=num; i>0; i=i/10){
        r = i%10;
        sum = sum + r* r* r;

    }

    if( num == sum){
        cout<< num << " is an armstrong number "<< endl;
    }

    else{
        cout<< num << " is not an armstrong number " <<endl;
    }

    return 0;
}