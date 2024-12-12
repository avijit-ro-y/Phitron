#include<bits/stdc++.h>
using namespace std;

int main(){

    int element,testcase;

    cin>>element>>testcase;
    vector<long long>v(element+1);
    for (int i = 1; i < element+1; i++)
    {
        cin>>v[i];
    }
    
    vector<long long>prefix_sum(element+1);
    prefix_sum[1]=v[1];
    for (int i = 2; i < element+1; i++)
    {
        prefix_sum[i]=v[i]+prefix_sum[i-1];
    }
    

    while (testcase--)
    {
        int l,r;
        long long sum;

        cin>>l>>r;
        if (l==0)
        {
            sum=prefix_sum[r];
        }
        else{
            sum=prefix_sum[r]-prefix_sum[l-1];
        }
        cout<<sum<<endl;
    }
    
    
    return 0;

}