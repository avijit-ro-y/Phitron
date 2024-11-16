#include<stdio.h>
int main(){
    int n;

    scanf("%d",&n);
    int array[n];
    int low=array[0];
    int position=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (array[i]<low)
        {
            low=array[i];
            position=i;
        }
        
    }
    printf("%d %d",low,position+1);
}