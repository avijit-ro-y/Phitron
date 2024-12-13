#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    vector<long long>v(n+1);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<long long>v2(n+1);
    v2[0]=v[0];
    for (int i = 1; i < n; i++)
    {
        v2[i]=v2[i-1]+v[i];
    }
    for (int i = 0,j=n-1; i <=j; i++,j--)
    {
        swap(v2[i],v2[j]);
    }
        for (int i = 0; i < n; i++)
    {
        cout<<v2[i]<<" ";
    }
    // Write your code here

    return 0;
}
