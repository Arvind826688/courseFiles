#include <iostream>
using namespace std;
int main(){

    int week;
    cout<< " Enter week number (1-7): ";
    cin>>week;

    if(week==1){cout<< " Monday "; }
    else if(week==2){cout << "tuesday";}
    else if(week==3){cout<<"Wednesday";}
    else if(week==4){cout<<"Thrusday";}
    else if(week==5){cout<<"Friday";}
    else if(week==6){cout<<"Saturday";}
    else if(week==7){cout<<"Sunday";}
    else{ cout<< " invalid input ! please enter week in between 1-7 ";}
    return 0;

}