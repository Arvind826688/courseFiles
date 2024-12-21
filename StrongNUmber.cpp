// print all stong numbers between two numbers 
#include <iostream>
using namespace std;

long long fact(int num);
void printStrongNumbers(int start , int end);

int main(){
    int start, end;

    cout<< " enter the lower limit : and upper limit ";
    cin>> start>> end;

    cout<< " list of strong number between " << start << " to " << end << " are ";
    printStrongNumbers(start , end);

    return 0;
}

void printStrongNumbers(int start , int end){
    long long sum;
    int num;
    while(start != end){
        sum = 0;
         num = start;
          while(num!=0){
            sum += fact(num%10);
            num/=10;
          }

          if(start== num){ cout<< start<< endl;}
          start++;
    }
}

long long fact(int num){
    if(num==0)
        return 1;
    else 
        return (num * fact(num-1));
}