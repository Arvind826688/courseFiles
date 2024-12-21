// converting a string to lower case 
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char string[100];
    cout<< " input a string to convert to lower case " ;
    cin.getline(string, 100);
    cout<< " string in lowe case  : " << strlwr(string);
    return 0;
}