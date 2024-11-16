#include<stdio.h>
void one_to_n(int number ){
    if (number==1)
    {
        printf("1");
        return;
    }
    else{
    printf("%d ",number);
    number=number-1;
    one_to_n(number);
    }
}
int main(){                   
    int n;
    scanf("%d",&n);
    one_to_n(n);
}