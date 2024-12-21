#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

void functionLower(char []);
int main(){
    char string[100];
    cout<< " enter a string to convert in into lowercase " <<endl;
    cin.getline(string, 100);
    functionLower(string);
    cout<< "entered string in lower case is : "<<string;
    return 0;


}

void functionLower(char s[]){
    int c=0;
    while(s[c] != '\0'){
        if (s[c] >='A' && s[c] <= 'Z'){
            s[c] = s[c] + 32;
        }
        c++;
    }
}