#include<stdio.h>

int fact(int n)
{
    //int factorial=1;
    if(n==1)
       return 1;
    else{
        return n*fact(n-1);
    }  
     
}
int main()
{
    int n;
    printf("Enter the number whose factorial is needed:\n");
    scanf("%d",&n);
    int factorial=fact(n);
    printf("The factorial of %d is = %d",n,factorial);
    return 0;
}