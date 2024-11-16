#include<stdio.h>
int main(){
    int n;
    int month;

    scanf("%d",&n);
    int years=n/365;
    printf("%d years\n",years);
    int months=n%365;
    month=months/30;
    printf("%d months\n",month);
    int days;
    days=months%30;
    printf("%d days",days);
}