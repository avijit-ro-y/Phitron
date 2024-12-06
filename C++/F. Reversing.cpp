#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin>>n;
    int array[n];
    int array2[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1-i; j>-1 ; j--)
        {
            array2[j]=array[i];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<array2[i]<<" ";
    }
    return 0;

}