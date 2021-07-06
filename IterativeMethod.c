#include<stdio.h>
#include<math.h>

float func(float x)
{
    return(5/(x*x+3));
}
int main()
{
    float x;
    int i;
    x=1.5;
    int n;
    printf("Enter the number of iteration: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n%d\t%.4f\t%.4f",i,x,func(x));
        x=func(x);
    }
    return 0;
}