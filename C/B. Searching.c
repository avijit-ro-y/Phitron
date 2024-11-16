#include<stdio.h>
int main(){
    int n;

    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    int X;
    int indicator=0;

    scanf("%d",&X);
    for (int i = 0; i < n; i++){
        if (X==array[i])
        {
            printf("%d",i);
            indicator=1;
            break;
        }
    }
    if (indicator!=1)
    {
        printf("-1");
    }
    
}