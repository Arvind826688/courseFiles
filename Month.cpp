#include <iostream>
using  namespace std;

int main(){

    int monthNumber;
    cout<< " enter month number 1-12 : ";
    cin>> monthNumber;

    switch(monthNumber){

        case 1: cout<< " 31 days";
        break;
        case 2: cout<< "28 days ";
        break;
        case 3: cout<< " 31 days ";
        break;
        case 4: cout<< " 30 days ";
        break;
        case 5 : cout<< " 31 days ";
        break;
        case 6 : cout<< " 30 days ";
        break;
        case 7 : cout<< " 31 days ";
        break;
        case 8 : cout<< " 30 days ";
        break;
        case 9 : cout<< " 31 days ";
        break;
        case 10: cout<< " 30 days ";
        break;
        case 11: cout<< " 31 days ";
        break;
        case 12: cout<< " 30 days ";
        break;

        default:
            cout<< " re enter the number : ";
    }
    return 0;
}