#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d",&m);
        if (m<1)
        {
            printf("Entry-level candidate\n");
        }
        else if(m>=1 && m<=3){
            printf("Junior candidate\n");
        }
        else if(m>=4 && m<=7){
            printf("Mid-level candidate\n");
        }
        else{
            printf("Senior candidate\n");
        }
    }

   
    return 0;
}
