#include <iostream>
using namespace std;

int main(){
    int num, total;
    cout<< " enter any number : "<<endl;
    cin>> num;

    for(total = 0; num>0; num= num/10)
    total= total+ (num%10);

    cout<< "\nsum of digits : "<< total;

}