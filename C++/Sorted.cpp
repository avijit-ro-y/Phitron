#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout<<"Enter the testcase:";
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        set<int>s;
        int n;
        cin>>n;
        while (n--)
        {
            int val;
            cin>>val;
            s.insert(val);
        }
        for (auto it = s.begin(); it !=s.end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}