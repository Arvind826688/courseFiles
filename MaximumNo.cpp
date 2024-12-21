// program to find max number using switch case 

#include <iostream>
using namespace std;
int main(){

    int num1, num2;

    cout<< " enter two numbers to find max ";
    cin>> num1 >> num2 ;

    switch (num1>num2)
    {
    case 0: cout<< " num 2 is max number " << num2;
        break;
    
    case 1: cout<< num1 << " is max number ";
        break;
    }
}