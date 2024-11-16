#include<stdio.h>
#include<string.h>
int main(){
    int n;

    scanf("%d",&n);
    char string[200];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",string);
        if (strlen(string)<10+1){
            printf("%s\n",string);
        }
        else{
            printf("%c%d%c\n",string[0],strlen(string)-2,string[strlen(string)-1]);
        }
    }
}