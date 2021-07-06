#include<stdio.h>

void main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);

    if(a>0)
         printf("The nnumber is positive");
    else if(a<0)
        printf("The number is negative");
    else
        printf("The number is zero");
    
        
}