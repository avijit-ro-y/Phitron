#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin>>n;
    int array[n];
    int indicator=0;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int i = 0,j=n-1; i <=j; i++,j--)
    {
        if (array[i]!=array[j])
        {
            indicator=0;
            break;
        }
        else{
            indicator=1;
        }
    }
    if (indicator==0)
    {
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    
    return 0;

}