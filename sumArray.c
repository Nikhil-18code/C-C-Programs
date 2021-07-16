#include<stdio.h>

float average(int arr[],int n)
{

    float  sum=0;
   float average;
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
         sum += arr[i];
    }
    average=sum/n;
    return average;
}
int main()
{
    int  n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("The average sum of all the elements of array is = %f",average(arr,n));
    return 0;  
}