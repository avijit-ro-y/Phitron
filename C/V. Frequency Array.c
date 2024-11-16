#include<stdio.h>
int main(){
    int n;
    int m;
    int F_array[100005]={0};
    scanf("%d %d",&n,&m);
    int array[n+1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        F_array[array[i]]+=1;
    }
    int testcase;

    for (int i = 1; i < m+1; i++)
    {
        printf("%d\n",F_array[i]);
    }
    
}