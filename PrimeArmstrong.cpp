#include <iostream>

#include <math.h>
using namespace std;
int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);

int main(){

    
    int num ;

    cout<< " enter a positive integer : ";
    cin>>num;

    if(checkPrimeNumber(num) == 1 ){
        cout<< " is a prime number : "<<endl;

    }else{
        cout<< " is not a prime number "<<endl;
    }

    if(checkArmstrongNumber(num) == 1){
        cout<< " is armstrong number ";
    }else{ cout<< " is not a armstrong number "<<endl;}
    return 0;
    


}



int checkPrimeNumber(int num){
    int i;

    for(i=2; i<=num/2; ++i){
        if(num%i == 0){
            return 1;
            break;
        }
        else return 0;
    }
}


int checkArmstrongNumber(int number){
    int originalNumber, remainder, result =0, num=0;

    originalNumber = number;

    while(originalNumber!=0){
        originalNumber /=10;
        ++num;

    }

    originalNumber = number;
    while(originalNumber !=0){
        remainder = originalNumber;
        result += pow(remainder, num);
        originalNumber/=10;


    }

    if(result == number)
        return 1;
    else   
        return 0;
}