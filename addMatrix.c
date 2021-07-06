#include <stdio.h>

int main()
{
    int a[2][2];
    int b[2][2];
    int sum[2][2];
    printf("Enter the elements of first matrix:\n");
    for( int i = 0; i < 2; i++)
    {
        for( int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    for ( int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matrix repreesenting sum of both matrices are:\n");
    for( int k = 0; k < 2; k++)
    {
        for ( int l = 0; l < 2; l++)
        {
            printf("sum[%d][%d]:%d\n", k, l, (a[k][l] + b[k][l]));
        }
    }
}