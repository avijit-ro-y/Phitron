#include<stdio.h>
#include<string.h>
int main(){
    char strng[10000001];

    scanf("%s",strng);
    int frequency_array[26]={0};
    for (int i = 0; strng[i]!='\0'; i++)
    {
        char chr=strng[i];
        int index=chr-'a';
        frequency_array[index]+=1;

    }
    for (int i = 0; i < 26; i++)
    {
        if (frequency_array[i]>=1)
        {
            printf("%c : %d\n",i+'a',frequency_array[i]);
        } 
    }
    
}