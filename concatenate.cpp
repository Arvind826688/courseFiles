#include <iostream>
#include <cstring>
using namespace std;

int main(){
     char s1[50],s2[50];

     cout<< "enter the first string : ";
     cin.getline(s1, 50);
     cout<< " enter the second string : " ;
     cin.getline(s2,50);

     strcat(s1,s2);
     cout<< "string obtained on concatenation : "<< s1<<endl;
     return 0;


}