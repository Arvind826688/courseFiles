#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

void functionUpper(char []);
int main(){
    char string[100];
    cout<< " enter a string to convert in into uppercase " <<endl;
    cin.getline(string, 100);
    functionUpper(string);
    cout<< "entered string in upper case is : "<<string;
    return 0;


}

void functionUpper(char s[]){
    int c=0;
    while(s[c] != '\0'){
        if (s[c] >='a' && s[c] <= 'z'){
            s[c] = s[c] - 32;
        }
        c++;
    }
}