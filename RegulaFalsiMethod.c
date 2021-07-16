#include<stdio.h>
#include<math.h>

int n,i;
float f(float x)
{
    return (3*x+sin(x)-exp(x));
}
void regulaFalsi()
{
     float x0,x1,x2;
    float f0,f1,f2;
    for(x1=0;;)
    {
        f1=f(x1);
        if(f1>0)
        break;
        else
        x1+=0.1;
    }
    x0=x1-0.1;
    printf("Ineration x\t f(x) \n");
    for(i=0;i<n;i++)
    {
        x2=(x0*f(x1)-f1*f(x0))/(f(x1)-f(x0));
        f2=f(x2);
        if(f0*f2<0)
        {
            x1=x2;
            f1=f2;
        }
        else
        {
            x0=x2;
            f0=f2;
        }
        printf("\n%d\t%f\t%f",i+1,f2,x2);
    }
    printf("\nRoot of given problem is = %0.5f",x2);
}
void main()
{
    printf("Enter the number of iterations: ");
    scanf("%d",&n);
    regulaFalsi();
}