#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int testcase;
    scanf("%d",&testcase);
    for (int t = 0; t < testcase; t++)
    {
        int n;
        scanf("%d",&n);
        for (int i = 1; i < n+1; i++){
            printf("%d ",i);
        }
        for (int i = n-1; i > 0; i--){
            printf("%d ",i);
        }
        printf("\n");
    } 
    
    return 0;
}
