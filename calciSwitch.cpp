#include <iostream>
using namespace std;
int main(){

    char mathoperator;
    double firstNumber, secondNumber;

    cout<< " Enter an operator ( + , - , * , / ): ";

    cin>> mathoperator;

    cout<< " enter two operands : ";
    cin>> firstNumber>> secondNumber;


    switch(mathoperator){

        case '+': 
            cout<< firstNumber << " + "<< secondNumber << " = " << firstNumber + secondNumber<<endl;
        break;


        case '-':
            cout<< firstNumber << " - "<< secondNumber<< " = "<< firstNumber - secondNumber<< endl;
        break;

        case '*':
            cout<< firstNumber << " * "<< secondNumber<< " = "<< firstNumber * secondNumber<< endl;
        break;

        case '/':
            cout<< firstNumber << " / "<< secondNumber<< " = "<< firstNumber / secondNumber<< endl;
        break;

        default:
        cout<<" Error please enter correct operator " ;

    }

    return 0;
}