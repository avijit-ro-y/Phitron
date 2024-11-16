#include<stdio.h>
int main(){                                                 
    int n;
    scanf("%d",&n);
    for (int loop = 0,k=1; loop < n; loop++,k+=2){   //ekhne k er value star er number controll korteche   //loop row borabor kaj korteche
        for (int gap = n-loop-1; gap > 0; gap--)
        {
        printf(" ");
        }
        for (int star = 1; star <=k ; star++)       //star colum borabor kaj korteche
        {
            printf("*");
        }
        printf("\n");
    }
    for (int loop = 0,k=2*n-1; loop < n; loop++,k-=2)
    {
        for (int gap = 1; gap<=loop ; gap++) //ekhne 2nd 1st line e gap nei bolei 2nd line ba gap=1 theke neya hoyeche
        {
        printf(" ");
        }
        for (int star = 0; star <k; star++)       
        {
            printf("*");
        }
        printf("\n");
    }
}