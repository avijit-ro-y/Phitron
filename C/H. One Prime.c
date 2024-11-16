#include<stdio.h>
int main(){
    int n;

    scanf("%d",&n);
    int indicator=0;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            indicator=1;
        }
        
    }
    if (indicator!=1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}