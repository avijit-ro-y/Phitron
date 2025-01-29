#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout<<"Enter testcase:";
    cin>>t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string s;
        cout<<"Enter the string:";
        getline(cin,s);
        stringstream ss(s);
        string word;
        map<string,int>mp;
        string max_word;
        int max_count=0;
        while (ss>>word)
        {
            mp[word]++; 
            if (mp[word]>max_count)
            {
                max_count=mp[word];
                max_word=word;
            }
            
        }
        cout<<max_word<<" "<<max_count<<endl;
    }

    
    return 0;
}