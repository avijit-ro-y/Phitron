#include<stdio.h>
int main(){
    int n,m;

    int *a=&n;
    int *b=&m;
    int x=*a;
    int y=*b;
    scanf("%d %d",&x,&y);
    int temp=y;
    y=x;
    x=temp;
    printf("%d %d",x,y);
}