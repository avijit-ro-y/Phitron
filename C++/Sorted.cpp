#include <bits/stdc++.h>

using namespace std;



int main()
{
    
    long long testcase;
    cin>>testcase;
    while (testcase--)
    {
        long long n;
        cin>>n;
        long long array[n];
        long long array2[n];
        for (int i = 0; i < n; i++)
        {
            cin>>array[i];
        }
        for (int i = 0; i < n; i++)
        {
            array2[i]=array[i];
        }
        sort(array2,array2+n);
        long long indicator=0;
        for (int i = 0; i < n; i++)
        {
            if (array2[i]!=array[i])
            {
                indicator=0;
            }
            else{
                indicator++;
            }
        }
        if (indicator==n)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    // Write your code here

    return 0;
}
