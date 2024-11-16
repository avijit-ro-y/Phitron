#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char strng1[100];
    char strng2[100];
    char strng3[100];

    scanf("%s %s %s",strng1,strng2,strng3);
    int c1=strcmp(strng1,strng2);
    int c2=strcmp(strng1,strng3);
    int c3=strcmp(strng2,strng1);
    int c4=strcmp(strng2,strng3);
    if (c1>0 && c2>0)
    {
        if (strcmp(strng2,strng3)>0)
        {
           printf("%s\n",strng3); 
        }
        else{
            printf("%s\n",strng2);
        }
        printf("%s\n",strng1);

    }
    else if (c3>0 && c4>0)
    {
         {
        if (strcmp(strng1,strng3)>0)
        {
           printf("%s\n",strng3); 
        }
        else{
            printf("%s\n",strng1);
        }
        printf("%s\n",strng2);

        }
    }
    else
    {
        if (strcmp(strng1,strng2)>0)
        {
           printf("%s\n",strng2); 
        }
        else{
            printf("%s\n",strng1);
        }
        printf("%s\n",strng3);

    }
    
    return 0;
}
