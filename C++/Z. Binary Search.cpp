#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,testcase;

    cin>>n>>testcase;
    int array[n];
    for (int i = 0; i < n; i++)
    {

        cin>>array[i];
    }
    sort(array,array+n);
    for (int i = 0; i < testcase; i++)
    {
        int indicator=0;
        int left=0;
        int right=n-1;
        int val;

        cin>>val;
        while (left<=right)
        {
            int mid=(left+right)/2;
            if (array[mid]==val)
            {
                indicator=1;
                break;
            }
            else if (array[mid]<val)
            {
                left=mid+1;
            }
            else{
                right=mid-1;
            }
            
        }
        if (indicator==0)
        {
            cout<<"not found"<<endl;
        }
        else{
            cout<<"found"<<endl;
        }
    }

    return 0;

}