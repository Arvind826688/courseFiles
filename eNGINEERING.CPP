#include <iostream>
using namespace std;
int main(){
    int p, c, m, t, mp;
    cout<< "eligibility criteria for an engineering : "<<endl;
    cout<< " marks in mathematics > = 65 : "<<endl;
    cout<< " marks in chemistry > =50 "<<endl;
    cout<< " Total in all three subject > =100 : "<<endl;
    cout<< " or total in maths and physics > = 140 : "<<endl;
    cout << " -------------------------------------------------------------------------"<<endl;
    cout<< " Input the marks obtained in physics  : "<<endl;
    cin>>p;
    cout<<" INput the marks obtained in chemistry : "<<endl;
    cin>>c;
    cout<<" input the marks obtained in mathematics : "<<endl;
    cin>>m;
    cout<< " total marks of : "<< m + p + c <<endl;


    if (m>=65)
        if(p>=55)
            if(c>=50)
                if((m+p+c)>=180 || (m+p)>=140)
                cout<<"the candidate is eligible for the admission "<<endl;
                else cout<<" the candidate is not eligible";
            else cout<< " the candidate is not eligible ";
        else cout<< " the candidate is not eligible ";
    else cout<< " the candidate is not eligible ";
    
return 0;
}