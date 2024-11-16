#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int array[n][m];
    if (n!=m)
    {
        printf("NO");
    }
    else{
        int indicator=0;
        for (int row = 0; row < n; row++)
        {
            for (int collumn = 0; collumn < m; collumn++)
            {
                scanf("%d",&array[row][collumn]);
            }

        }

        for (int row = 0; row < n; row++)
        {
            for (int collumn = 0; collumn < m; collumn++)
            {
                if (row==collumn || row+collumn==n-1)
                {
                    if (array[row][collumn]!=1)
                    {                    
                        indicator=1;
                        break;                   //scalar houar jonno duita condition i fillup korte hobe ba only je condition tar jonno hobe na seta use korte hobe.ar eksathe duita coindition fullup kora posible na tai just(je 1ta condition) jetar jonno scalar hobe na sei condition ta use korte hobe
                    }
                } 
                else if(array[row][collumn]!=0)
                    {
                        indicator=1;
                        break;
                    }      
            }
        }
        if (indicator==1)
        {
            printf("NO");
        }
        else{
            printf("YES");
        }
    }   
    return 0;
}
