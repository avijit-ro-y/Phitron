#include<stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A>B && B<C){
        if (A>C)
        {
            printf("%d\n%d\n%d\n",B,C,A);
        }
        else{
            printf("%d\n%d\n%d\n",B,A,C);
        }
    }
    else if(A>C && C<A){
        if (A>B)
        {
            printf("%d\n%d\n%d\n",C,B,A);
        }
        else{
            printf("%d\n%d\n%d\n",C,A,B);
        }
    }
    else{
        if (B>C)
        {
            printf("%d\n%d\n%d\n",A,C,B);
        }
        else{
            printf("%d\n%d\n%d\n",A,B,C);
        }
    }
    printf("\n");
    printf("%d\n%d\n%d",A,B,C);
}