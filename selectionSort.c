#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k,j,min;
    for(k=0;k<n-1;k++)
    {
        min=k;
        for(j=k+1;j<n;j++)
        {
            if(a[j]<a[min])
              min=j;
        }
        if(min!=k)
        {

            int temp=a[k];
            a[k]=a[min];
            a[min]=temp;
        }
    }
     printf("sorted array elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}