#include <iostream>
using namespace std;

int main(){
    cout<< " printing ascii values for all uppercase letters of the english alphabets : \n\n";

    for(char c = 'A'; c<= 'Z' ; ++c){
        cout<< " the ascii value of " << c << " is " << int(c)<< "\n";
    }
}