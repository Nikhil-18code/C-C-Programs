#include<stdio.h>
#include<math.h>

float func(float x)
{
    return(x*x*x-5*x+3);
}
float differeFunc(float x)
{
    return(3*x*x-5);
}
int i,n;
void newtonRaphsonMethod()
{
    float x0,x1,f0,f1,df0;
    for(x1=0;;x1=x1+0.001)
    {
        f1=func(x1);
        if(f1>0)
        break;
    }
    x0=x1-0.01;
    x0=(x0+x1)/2;
     printf("Ineration x\t func(x) \n");
     for(i=1;i<=n;i++)
     {
         f0=func(x0);
         df0=differeFunc(x0);
         x1=x0-(f0/df0);
         x0=x1;
         printf("\n%d\t%f\t%f",i+1,x1,f0);
     }
       printf("\nRoot of given problem is = %0.5f",x1);
}
int main()
{
    printf("Enter the number of iterations: ");
    scanf("%d",&n);
    newtonRaphsonMethod();
}