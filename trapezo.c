#include<stdio.h>
#include<math.h>

float func(float x)
{
    return sin(x);
}
int main()
{
    float a,b,result,h,sum=0;//,result,h;
    int n;
    printf("Enter the upper limit: ");
    scanf("%f",&b);
    printf("Enter the lower limit: ");
    scanf("%f",&a);
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    h=(b-a)/n;
    sum=func(a)+func(b);
    sum=sum*0.5;
    for(int i=1;i<n;i++)
    {
        sum=sum+func(a+h*i);
    }
     result=sum*h;
    //result=fabs(res);
    printf("The result is: %f",result);
    return 0;
}