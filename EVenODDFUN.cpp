// even or odd using functions 

#include <iostream>
using namespace std;

int isEven(int num){
    return !(num&1);
}

int main(){
    int num;

    cout<< " enter any number ";
    cin>> num;

    if(isEven(num)){
        cout<< " the entered number is even ";

    }
    else{cout<< " entered number is odd ";
    }
}