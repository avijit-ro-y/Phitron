#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int min=array[0];
    int count;
    for (int i = 0; i < n; i++)
    {
        if (array[i]<min)
        {
            min=array[i];
        } 
    }
    for (int i = 0; i <n; i++){
            if (array[i]==min){
            count+=1;
            }
    }
    if (count%2!=0){
        printf("Lucky");
    }
    else{
    printf("Unlucky");
    }   
}