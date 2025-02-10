#include<bits/stdc++.h>
using namespace std;

int main(){
    int node,connection;
    cout<<"Enter the node and connection:";
    cin>>node>>connection;
    int matrix[node][node];
    for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
            matrix[i][j]=0;
            if(i==j){
                matrix[i][j]=1;
            }
        }
    }
    for(int i=0;i<connection;i++){
        int a,b;
        cin>>a>>b;
        matrix[a][b]=1;
    }
    int testcase;
    cin>>testcase;
    while (testcase--)
    {
        int node1,node2;
        cin>>node1>>node2;

        if (matrix[node1][node2]==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}