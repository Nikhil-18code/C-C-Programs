#include<stdio.h>
#include<conio.h>
#include<limits.h>

int read(int a[],int n);
int smallest(int a[], int n);
int largest(int a[], int n);

int main()
{
    int spos,lpos;

    int n;
    printf("enter the number of element in array = ");
    scanf("%d",&n);

    int a[n];
    read(a,n);

    int small = smallest(a,n);
    printf("smallest number in the array = %d\n",small);

    int large = largest(a,n);
    printf("largest number in the array = %d\n",large);

    for(int i=0;i<n;i++)
    {
       if(a[i]==small)
          {
              spos=i;
              break;
          }
    }
    for(int i=0;i<n;i++)
    {
       if(a[i]==large)
          {
              lpos=i;
              break;
          }
    }

    int swap;
     swap=  a[lpos];
     a[lpos] = a[spos];
     a[spos] = swap;
    // swap=large;
    // large=small;
    // small=swap;

     for (int i = 0; i < n; i++)
     {
         printf("a[%d] = %d\n",i,a[i]);
     }
     

    return 0;

}

int read(int a[10], int n)
{
    for (int i = 0; i < n; i++)
     { 
         printf("a[%d] = ",i);
         scanf("%d",&a[i]);
     }
        
}

int smallest(int a[10], int n)
{
    //int s = a[0];
    int min =  INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min>a[i])
        {
           min=a[i];
        }
        
    }
    return min;
}

int largest(int a[10], int n)
{
  int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max< a[i])
        {
           max=a[i];
        }
        
    }
    return max;
}