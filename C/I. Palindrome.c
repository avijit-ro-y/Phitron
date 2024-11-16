#include<stdio.h>
#include<string.h>
int main(){
    char strng[1000];
    char strng2[1000];

    scanf("%[^\n]s",strng);
    for (int i = 0; i < strlen(strng); i++)
    {
          for (int j =strlen(strng)-1-i ; j>-1; j--)
          {
            strng2[j]=strng[i];
          }
          
    }
    strng2[strlen(strng)]='\0';

    int indicator=0;
    for (int i = 0; i < strlen(strng); i++)
    {
        if (strng2[i]!=strng[i])
        {
            indicator=0;
            break;
        }
        else{
            indicator=1;
        }
    }
    if (indicator==1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}