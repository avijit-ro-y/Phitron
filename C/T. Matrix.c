#include<stdio.h>
#include<math.h>
int main(){
    int row_collumn;

    scanf("%d",&row_collumn);
    int array[row_collumn][row_collumn];

    for (int i = 0; i < row_collumn; i++)
    {
        for (int j = 0; j < row_collumn; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    int sum_main=0;
    int sum_second=0;
    for (int i = 0; i < row_collumn; i++)
    {
        for (int j = 0; j < row_collumn; j++)
        {
            if (i==j)
            {
                sum_main+=array[i][j];
            }
            if (i+j==row_collumn-1)
            {
                sum_second+=array[i][j];
            }
        }
    }
    int total_sum=abs(sum_main-sum_second);

    printf("%d\n",total_sum);
}