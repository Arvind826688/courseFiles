#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<< " Enter any character : ";
    cin>> ch;

    cout<< " It is " << (((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) ? "alphabet" : "not alphabet");
    return 0;
}