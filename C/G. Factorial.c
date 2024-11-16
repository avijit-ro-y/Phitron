#include<stdio.h>
int main(){
    int n,num;

    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        long long fact=1;

        scanf("%d",&num);
        for (int i = num; i >1 ; i--){
        fact*=i;
        }
        printf("%lld\n",fact);
    }
    
    
}