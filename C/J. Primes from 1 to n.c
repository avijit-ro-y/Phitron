#include<stdio.h>
int main(){
    int n;

    scanf("%d",&n);
    for (int i = 2; i < n+1; i++)
    {
        int indicator=0;
        for (int j = 2; j*j <i+1; j++)
        {
            if (i%j==0){
                indicator=1;
            }
        }
        if (indicator!=1)
        {
            printf("%d ",i);
        }
        
    }
}