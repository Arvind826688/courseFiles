// power function using functions for integers 

#include <iostream>
using namespace std;

double PowerFunction(double num, int power);

int main(){
    int num;
    int power;
    double c;

    cout<< " enter number and its power u want to calculate  : "<< endl;
    cin>> num>> power ;
    

    c = PowerFunction(num, power);

    cout<< " cube of " << num << " is " << c;
    return 0;


}

double PowerFunction(double num, int power){
    long long result = 1;
    while(power!= 0){
        result *=  num;
        --power;
    }
    return result;   
}