#include<stdio.h>
int main(){
    for (int i = 0; i < 100; i++)
    {
        int n,m;

        scanf("%d %d",&n,&m);
        int sum=0;
        if (n<=0|| m<=0)
        {
            return 0;
        }
        
        if (n>m)
        {
        int temp=m;
        m=n;
        n=temp;
        }
        for (int i = n; i < m+1; i++)
        {
        printf("%d ",i);
        sum+=i;
        }
        printf("sum =%d\n",sum);
    }
    

}