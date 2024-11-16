#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    for (int testcase = 0; testcase < t; testcase++)
    {
        long long m,a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        long long d=(m/(a*b*c));
        if (m%(a*b*c)!=0)
        {
            printf("-1\n");
        }
        else{
            printf("%lld\n",d);
        }  
    }   
    return 0;
}
