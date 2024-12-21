#include <iostream>
#include <string.h>

#define MAX_SIZE 100
using namespace std;
int main(){
    char string[MAX_SIZE];
    int alphabets , digits, specialCharacters , i;

    alphabets = digits = specialCharacters = i = 0;

    cout<<" Enter any string : ";
    cin>>string;

    while (string[i] != '\0'){
        if((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
        {
            alphabets++;
        }
        else if(string[i]>='0' && string[i] <= '9')
        {
            digits++;
        }
        else{
            specialCharacters++;
        }
        i++;
    }
    cout<< " Total Alphabets : " << alphabets << endl;
    cout<< " Total Digits : " << digits<< endl;
    cout<< " Total Special Characters  : "<< specialCharacters<<endl;
}
