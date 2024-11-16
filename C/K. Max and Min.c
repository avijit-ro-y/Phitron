#include<stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if (A>=B && C>=B)
    {
        if (A>=C)
        {
            printf("%d %d",B,A);
        }
        else{
            printf("%d %d",B,C);
        } 
    }
    else if (A>=C && C<=B)
    {
        if (A>=B)
        {
            printf("%d %d",C,A); 
        }
        else{
            printf("%d %d",C,B);
        } 
    }
    else
    {
        if (B>=C)
        {
            printf("%d %d",A,B);
        }
        else{
            printf("%d %d",A,C);
        } 
    }
}