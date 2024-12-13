#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    int indicator=0;
    for (int i = 1; i < n; i++) {
        if (array[i] == array[i - 1]) {
            indicator=1;
            break;
        }
    }
    if (indicator==0)
    {
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    // Write your code here

    return 0;
}
