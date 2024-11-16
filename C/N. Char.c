#include<stdio.h>
int main(){
    char character;
    scanf("%c",&character);
    if ('a'<=character && character<='z')
    {
        character-=32;
    }
    else{
        character+=32;
    }
    printf("%c",character);
    return 0;
}