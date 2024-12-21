#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<< " Enter any alphabet : ";
    cin>> ch;


    if(ch== 'a' || ch== 'e' ||ch== 'i' ||ch== 'u' ||ch== 'o' || ch== 'A' || ch== 'E' ||ch== 'I' ||ch== 'O' ||ch== 'U' ){
        cout<< " alphabet is a vowel ";

    }
    else{ cout<< " alphabet is consonent "<< endl;}
}