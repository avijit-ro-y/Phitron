#include<stdio.h>
void add(int x,int y){
    int sum=x+y;
    printf("%d",sum);
}
int main(){
    int a,b;

    scanf("%d %d",&a,&b);
    add(a,b);
}