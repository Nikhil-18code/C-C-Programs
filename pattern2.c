#include<stdio.h>


void main()
{
    int i,j,n,k;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    int x=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            for(k=1;k<=j;k++)
            {
                printf("%d",x);
                x++;
            }
        
        }
        printf("\n");
    }

}