#include<stdio.h>
int main(){
    int n,a,b,sum,temp;
    scanf("%d",&n);
    for(int t=0;t<n;t++){
        scanf("%d %d",&a,&b);
        sum=0; 
        if (a>b)
        {
           temp=b;
           b=a;
           a=temp; 
        }
        for (int i = a+1; i < b; i++)
        {
            if (i%2!=0){
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }
}