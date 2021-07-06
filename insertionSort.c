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
    int temp,j,k;
    for(int k=1;k<n;k++)
    {
        temp=a[k];
        j=k-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
     printf("sorted array elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}