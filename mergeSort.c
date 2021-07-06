#include<stdio.h>
//Merging all the elements of the array based on the condition in a new array
void merge(int a[],int low,int mid,int high)
{
    //int i=low,j=mid+1,b[100],k=low;
    int i,j,k,b[100];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;k++;
        }
        else
        {
            b[k]=a[j];
            j++;k++;
        }
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;k++;
    }
    while(j<=high)
    {
        b[k]=a[j];
        j++;k++;
    }
    //Copying elements of sorted array b[] to original array a[].
    for(int i=low;i<=high;i++)
       a[i]=b[i];
} 
//Finding mid and seprating until only one element remains
void mergeSort(int a[],int low,int high)
{
    int mid;
    // if(low>=high)
    //     return; 
    if(low<high)
    {
    mid=(low+high)/2;
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);

    }
}
void printArray(int a[],int n)
{
     printf("sorted array elements are:");
     for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    } 
}
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
    mergeSort(a,0,n-1);
    printArray(a,n);
    return 0;
}