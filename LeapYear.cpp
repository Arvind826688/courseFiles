#include <iostream>
#include <stdio.h>

int main()
{
    int year;
    cout<< " Enter any year : ";
    scanf("%d" , &year);
    (year%4==0 && year%100 !=0) ? printf("%d is leap year", year):(year%400 ==0 )? cout<< " Leap year": cout<<year<<"is not leap year";
    return 0;
}