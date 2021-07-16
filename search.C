#include<stdio.h>

int main()
{
    int n,element,count=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
       {
           scanf("%d",&arr[i]);
       }
     printf("Enter the element to be searched:");
     scanf("%d",&element);
     for(int i=0;i<n;i++)
        {
            if(arr[i]==element)
            {
              printf("Element is present");
              count++;
              break;
            }
        } 
        if(count==0)
          printf("element not found"); 
}