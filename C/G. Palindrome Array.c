#include<stdio.h>
int main(){
    int n;

    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    int indicator=0;
    for (int i = 0,j=n-1; i <=j; i++,j--)
    {
        if (array[i]==array[j])
        {
            indicator=1;
        }
        else{
            indicator=0;
            break;
        }
    }
    if (indicator==1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}