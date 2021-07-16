#include<stdio.h>

#include<math.h>


#define f(x) 1/(1+x*x)

int main()
{
 float lower, upper, integ=0.0, size, k;
 int i, subInterval;
 
 printf("Enter lower limit of integration: ");
 scanf("%f", &lower);
 printf("Enter upper limit of integration: ");
 scanf("%f", &upper);
 printf("Enter number of sub intervals: ");
 scanf("%d", &subInterval);

 
 size = (upper - lower)/subInterval;

 
 integ = f(lower) + f(upper);
 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*size;
  if(i%2==0)
  {
   integ = integ + 2 * f(k);
  }
  else
  {
   integ = integ + 4 * f(k);
  }
 }
 integ = integ * size/3;
 printf("\nRequired value of integration is: %.3f", integ);
 
 return 0;
}