#include <iostream>
#include <string>
using namespace std;

int main(){


    int integerNumber = 1;
    float DecimalNumber = 3.4666666666666666666666666666f;
    double BiggerDecimalNumber = 3.466666666666666666666666;
    char characters = 'c';
    string multipleCharacters = "hellow bro ";
    bool Booleans = true;

cout<< "enther the value of string " ;

    getline(cin,multipleCharacters);


    




    cout<< integerNumber<< "\n "<<DecimalNumber<<"\n"<<BiggerDecimalNumber<<"\n"<<characters<<"\n"<<multipleCharacters<<"\n"<<Booleans<<endl;
    cout<< integerNumber+DecimalNumber<<endl;
    return 0;

}