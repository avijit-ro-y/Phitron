#include<bits/stdc++.h>
using namespace std;

int main(){
    int node,connection;
    cout<<"Enter the node and connection:";
    cin>>node>>connection;
    vector<int>list[node]; //array of vector
    for(int i=0;i<connection;i++){
        int a,b;
        cin>>a>>b;
        list[a].push_back(b);
        list[b].push_back(a);
    }
    int testcase;
    cin>>testcase;
    while (testcase--)
    {
        int test_node;
        cin>>test_node;
        sort(list[test_node].begin(),list[test_node].end(),greater<int>());
        if (list[test_node].empty())
        {
            cout<<"-1";
        }
        else{
            for(int x:list[test_node]){
                cout<<x<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}