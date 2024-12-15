#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;

    cin>>s;
    vector<int>v(26,0);
    for (int i = 0; i < s.size(); i++)
    {
        int index=s[i]-'a';
        v[index]++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        char c=i+'a';
        if (v[i]>0)
        {
            cout<<c<<" : "<<v[i]<<endl;
        }
        
    }
    
    return 0;

}