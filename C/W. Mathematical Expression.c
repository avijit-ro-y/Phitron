#include<stdio.h>
int main(){
    int A,B,C;
    char S,Q;
    scanf("%d %c %d %c %d",&A,&S,&B,&Q,&C);
    if (S=='+' && Q=='=')
    {
        if (A+B==C)
        {
            printf("Yes");
        }
        else{
            printf("%d",A+B);
        }
    }
    if (S=='-' && Q=='=')
    {
        if (A-B==C)
        {
            printf("Yes");
        }
        else{
            printf("%d",A-B);
        }
    }
    if (S=='*' && Q=='=')
    {
        if (A*B==C)
        {
            printf("Yes");
        }
        else{
            printf("%d",A*B);
        }
    }
}