#include<iostream>
using namespace std;
int main(){
    char x;
    cin>>x;
    if (x>=65 && x<=129)
    {
        cout<<"ALPHA"<<endl;
        if (x>=65 && x<=91)
        {
            cout<< "IS CAPITAL"<<endl;
        }
        else{
            cout<< "IS SMALL"<<endl;
        }
    }
    else{
        cout<<"IS DIGIT";
    }
}