#include<stdio.h>
#include<string.h>
int main(){
    char strng[100000];

    scanf("%[^\n]s",strng);
    for (int i = 0; i <strlen(strng) ; i++)
    {
        if (strng[i]==',')
        {
            strng[i]=' ';
        }
        else if (strng[i]>='a' && strng[i]<='z')
        {
            strng[i]-=' ';
        }
        else if (strng[i]>='A' && strng[i]<='Z')
        {
            strng[i]+=' ';
        }
    }
    printf("%s",strng);
}