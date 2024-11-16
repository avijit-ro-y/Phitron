#include<stdio.h>
int main(){
    int n;
    long long sum=0;
    scanf("%d",&n);
    sum=(1LL*n*(n+1)/2);
    printf("%lld",sum);
}

//precaution 1LL and 1LL>>>>lld