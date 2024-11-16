#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int count0=0;
    int count1=0;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&i);
    
        if(i==0){
        count0+=1;
        }
        else{
        count1=n-count0;
        }
    }
    printf("%d %d",count0,count1);

    return 0;
}
