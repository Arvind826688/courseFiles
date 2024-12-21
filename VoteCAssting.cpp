#include <iostream>
using namespace std;

int main(){
    int CandidateAge;
    cout<<" Input the age of the candidate : "<<endl;
    cin>>CandidateAge;

    if(CandidateAge <18){
        cout<< " Sorry, you are not eligible to caste your vote "<<endl;
        cout<<" you would be able to caste your vote after "<<18-CandidateAge<<" year"<<endl;

    }
    else{
        cout<< "Congratulations you are eliglble "<<endl;
    }
    return 0;
}