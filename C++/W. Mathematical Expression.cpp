#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    char d,e;
    cin>>a>>d>>b>>e>>c;

    if (d=='+')
    {
        int result=a+b;
        if (result==c)
        {
            cout<<"Yes";
        }
        else{
            cout<<result;
        }
    }
    else if(d=='-'){
        int result=a-b;
        if (result==c)
        {
            cout<<"Yes";
        }
        else{
            cout<<result;
        }
    }
    else{
        int result=a*b;
        if (result==c)
        {
            cout<<"Yes";
        }
        else{
            cout<<result;
        }
    }
    return 0;

}