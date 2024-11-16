#include<stdio.h>
int main(){
    int n;

    scanf("%d",&n);
    int array[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&array[i]);
    }
    int min=array[0];
    int max=array[0];
    int min_index=0;
    int max_index=0;
    for (int i = 0; i <n; i++)
    {
        if (array[i]<min)
        {
            min=array[i];
            min_index=i;  
        }
        if(array[i]>max)
        {
            max=array[i];
            max_index=i;  
        }
    }  
    int temp=array[min_index];                // int temp=min;     //eta kora jabe na ...cause eta korle just value change hobe, index na
    array[min_index]=array[max_index];        // min=max;
    array[max_index]=temp;                    // max=temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    
}