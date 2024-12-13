#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    vector<int>v2(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v2[i];
    }
    v2.insert(v2.begin()+n,v.begin(),v.end());
    int total=n+n;
    for (int i = 0; i < total; i++)
    {
        cout<<v2[i]<<" ";
    }
    

    return 0;

}