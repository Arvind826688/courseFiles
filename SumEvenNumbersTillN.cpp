#include <iostream>
using namespace std;

int main(){
    int i, num , sum=0;

    cout<<" enter any number : "<<endl;
    cin>>num;

    for(i=2; i<=num; i+=2)
    {
        sum+=i;

    }

    cout<< " sum of all even numbers between 1 to " << num << " is "<< sum;

    return 0;
}