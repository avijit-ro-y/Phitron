#include<bits/stdc++.h>
using namespace std;

int val[1005];
int weight[1005];
int dp[1005][1005]; // jehetu ekhne value and price 2ta jinis store korte hobe
int knapsack(int i,int max_weight){
    if (i<0 || max_weight<=0)
    {
        return 0;
    }
    if (dp[i][max_weight]!=-1)
    {
        return dp[i][max_weight];
    }
    

    if (weight[i]<=max_weight)
    {
        //2 option
        //bag e rakhbo element ta
        int op1=knapsack(i-1,max_weight-weight[i])+val[i];
        //bag e rakhbo na
        int op2=knapsack(i-1,max_weight);
        dp[i][max_weight]=max(op1,op2);
        return  dp[i][max_weight];
    }
    else{
        //bag e rakhbo na
        dp[i][max_weight]=knapsack(i-1,max_weight);
        return  dp[i][max_weight];
    }
}
int main(){
    int n,max_weight;

    cin>>n>>max_weight;
    for (int i = 0; i < n; i++)
    {
        cin>>weight[i];
        cin>>val[i];
    }

    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < max_weight+1; j++)
        {
            dp[i][j]=-1;
        }
        
    }
    
    cout<<knapsack(n-1,max_weight);
    return 0;
}