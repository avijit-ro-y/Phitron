#include<stdio.h>
void one_to_n(int i,int *number){
    if (i>*number)
    {
        return;
    }
    printf("%d\n",i);
    i=i+1;
    one_to_n(i,number);
}
int main(){
    int n;
    scanf("%d",&n);
    int *number=&n;
    one_to_n(1,number);
}