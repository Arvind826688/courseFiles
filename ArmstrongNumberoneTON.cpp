#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int lower, higher, i, temp1, temp2, remainder, n=0, result = 0;

    cout<< " enter two number :  ";
    cin>> lower;
    cin>> higher;
    cout<< "armstrong numbers between " << lower << " and "<< higher << "are : ";

    for ( i = lower + 1; i<higher; ++ i ){
        temp2 = i;
        temp1 = i;

        while(temp1 != 0){
            temp1/= 10;
            ++n;
        }

        while(temp2 != 0){
            remainder = temp2%10;
            result += pow(remainder, n);
            temp2 /= 10;
        }

        if(result == i ){
            cout<< i<< endl;
        }
        n= 0;
         result = 0;
    }
    return 0;
}