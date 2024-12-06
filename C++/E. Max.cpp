#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin>>n;
    int array[n];
    int max_index=0;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        if (array[i]>array[max_index])
        {
            max_index=i;

        }
    }
    cout<<array[max_index]<<endl;

    return 0;

}