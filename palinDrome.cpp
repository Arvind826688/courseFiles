

#include <iostream>
using namespace std;

int main(){
    int num, i , rev;
    cout<< " enter any number : ";
    cin>> num;

    rev = num;
    for(i=0; num>0; num=num/10){
        i = i *10;
        i= i+(num%10);

    }


    if(rev==i)cout<< rev<< " is a palindrome number ";
    else cout<< rev<< " is not a palindrome number :";

    return 0;

}

