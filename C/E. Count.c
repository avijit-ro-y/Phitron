#include<stdio.h>
#include<string.h>
int main(){
    char strng[1000000];

    scanf("%s",strng);
    int sum=0;
    int num;
    for (int i = 0; i < strlen(strng); i++)
    {
        num=strng[i]-'0';
        sum+=num;
    }
    printf("%d",sum);
}