#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int N,K;
        
        scanf("%d %d",&N,&K);
        for (int testcase = 0; testcase < N; testcase++)
        {
            for (int i = 1; i < K+1; i++)
            {
                printf("%d ",i);
            }
            printf("\n");
        }

    return 0;
}
