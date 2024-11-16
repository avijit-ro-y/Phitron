#include<stdio.h>
int main(){
    int n;

    scanf("%d",&n);
    int array[n];
    int array2[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    // for (int i = 0,j=n-1; i < n; i++,j--)         \\nicher loop take evabeo likha jay
    // {
    //     array2[j]=array[i];
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1-i; j>-1 ; j--)          
        {
            array2[j]=array[i];
        }
    }   
    for (int i = 0; i < n; i++){
        printf("%d ",array2[i]);
    }
}