#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n;

    scanf("%d",&n);
    int *array=(int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+array[i];
    }
    printf("%lld ",llabs(sum));
}