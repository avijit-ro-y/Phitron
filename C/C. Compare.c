#include<stdio.h>
#include<string.h>
int main(){
    char strng1[100];
    char strng2[100];

    scanf("%s %s",strng1,strng2);
    if (strcmp(strng1,strng2)>0)
    {
        printf("%s",strng2);
    }
    else if (strcmp(strng2,strng1)>0)
    {
        printf("%s",strng1);
    }
    else{
        printf("%s",strng2);
    }   
}