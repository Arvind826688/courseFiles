#include <iostream>
#include <string.h>

#define MAX_SIZE 100
using namespace std;

int main(){
    char str1[1000], str2[1000];

    cout<< " Enter the first string: " <<endl; 
    cin>> str1;

    cout<< " Enter the second string "<< endl;
    cin>>str2;

    if(strcmp(str1, str2) == 0)
        cout<< " Entered string are eequal "<<endl;
    else  
        cout<<" Entered string are not equal " <<endl;
    return 0;
}