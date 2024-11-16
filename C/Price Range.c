#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int a,b;
    int count=0;

    scanf("%d %d %d",&n,&a,&b);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i <n; i++)
    {
        if (array[i]>=a && array[i]<=b)
        {
            count+=1;

        }
        
    }
    printf("%d ",count);

    return 0;
}
