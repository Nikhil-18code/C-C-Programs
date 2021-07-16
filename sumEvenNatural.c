#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number upto which sum is required: ");
    scanf("%d",&n);
    int i=2,sum=0,count=1;
    //int count=0;
    while(count<=n)
    {
       sum+=i;
       i+=2;
       count++;
    }
    printf("Sum of first %d even natural numbers is = %d",n,sum);
    return 0;
}