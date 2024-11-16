#include<stdio.h>
int main(){
    int row,collumn;

    scanf("%d %d",&row,&collumn);
    int array[row][collumn];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < collumn; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    int indicator=0;
    int number;

    scanf("%d",&number);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < collumn; j++)
        {
            if (array[i][j]==number)
            {
                indicator=1;
            }  
        }
    }
    if (indicator==0)
    {
        printf("will take number");
    }
    else{
        printf("will not take number");
    }
}