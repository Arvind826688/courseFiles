#include <iostream>
using namespace std;

int main(){

    int angleA, angleB, angleC, sum;

    cout<< " input the three angles of triangle in degress : ";
    cin >> angleA >> angleB >> angleC;


    sum = angleA + angleB + angleC;
    if (sum== 180){ cout<< " it is valid triangle  ";}
    else{cout<< " it is not a vaild triangle ";}

    return 0;
}