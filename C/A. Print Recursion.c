#include<stdio.h>
void recur(int i,int *p){
    if (i==*p)
    {
        return;
    }
    printf("I love Recursion\n");
    i=i+1;
    recur(i,p);  
}
int main(){
    int n;
    scanf("%d",&n);
    int *p=&n;
    recur(0,p);
}