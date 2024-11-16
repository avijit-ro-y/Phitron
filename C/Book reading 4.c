#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m;
    int count=0,sum=0;
    scanf("%d %d",&n,&m);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        count+=array[i];
        if (count>m)
        {
            break;
        }
        sum+=1;
    }
    printf("%d",sum);  


    return 0;
}
