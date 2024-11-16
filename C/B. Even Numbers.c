#include<stdio.h>
int main(){
    int n;
    int found=0;
    scanf("%d",&n);
    for (int i = 1; i < n+1; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
            found=1;                  //found=1 ekhane indicator hisabe use hocche
            
        }
    }
    if (found!=1)
    {
        printf("-1");
    }
    
}
