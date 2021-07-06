#include<stdio.h>

int main()
{
    int a[100];
    int s;
    printf("Enter the size of array:");
    scanf("%d",&s);
    printf("Enter array elements:\n");
    for(int i=0;i<s;i++)
        scanf("%d",&a[i]);

    for(int j=0;j<s;j++)
    {
        for(int k=0;k<s-1-j;k++)
        {
            if(a[k]>a[k+1])
            {
                int temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }   
    for (int i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    } 
    return 0;
}