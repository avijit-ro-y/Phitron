#include<stdio.h>
int main(){
    char C,next;
    scanf("%c",&C);
    if (C=='z')
    {
        printf("a");
    }
    else{
        next=C+1;
        printf("%c",next);
    }
} 