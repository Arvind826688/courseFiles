#include <iostream>
#include <math.h>
using namespace std;

int StringLength(char *);
int main(){
    char text[100];
    int length;

    cout<< " enter text ( max 100 character ) ";
    cin>> text;

    length = StringLength(text);

    cout<< " input text is : "<< text<< endl; 
    cout << " length is : "<< length<< endl;
    return 0;
}

int StringLength(char *str){
    int len=0;
    for(len=0; str[len]!='\0'; len++ ){}; // empty for loop just for the counter purpose 
    return len;
}