#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
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
    // swap(array[0][j] - array[row-1][j])  row change
    for (int j = 0; j < collumn; j++)
    {   
        int temp=array[row-1][j];
        array[row-1][j]=array[0][j];
        array[0][j]=temp;
    }
    // swap(array[i][0] - array[i][collumn-1])  collumn change
    for (int i = 0; i < row; i++)
    {   
        int temp=array[i][collumn-1];
        array[i][collumn-1]=array[i][0];
        array[i][0]=temp;      
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < collumn; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
