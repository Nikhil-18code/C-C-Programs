#include<stdio.h>
#include<math.h>

int i=1,n;float root=1;
float f(float x)
{
    return(x*log10(x)-1.2);
}
void bisection()
{
    float x0,x1,x2;
    float f0,f1,f2;
    for(x2=1;;x2++)
    {
        f2=f(x2);
        if(f2>0)
        break;
    }
    for(x1=x2-1;;x2--)
    {
        f1=f(x1);
        if(f1<0)
        break;
    }
    printf("Roots of the iteration \n");
    for(i=1;i<=n;i++)
    {
        x0=(x1+x2)/2.0;
        f0=f(x0);
        root=x0;
        if((f0*f1)<0)
         x2=x0;
        else
        {
            x1=x0;
            f1=f0;
        } 
        printf("\n%d\t%f",i,x0);
    }
    printf("\nActual root of the equation is = %.5f",x0);
}
int main()
{
    printf("Enter the number of iterations: ");
    scanf("%d",&n);
    bisection();
}
