#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,o;

    cin>>n>>m>>o;
    if (n>=m && n>=o)
    {
        if (m>=o)
        {
            cout<<o<<" ";
        }
        else{
            cout<<m<<" ";
        }
        cout<<n;
    }
    else if (m>=n && m>=o)
    {
        if (n>=o)
        {
            cout<<o<<" ";
        }
        else{
            cout<<n<<" ";
        }
        cout<<m;
    }
    else
    {
        if (n>=m)
        {
            cout<<m<<" ";
        }
        else{
            cout<<n<<" ";
        }
        cout<<o;
    }
    
    return 0;

}