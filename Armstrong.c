#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
 //clrscr();
 int l, u, a, b, rem, count = 0;
 double result = 0.0;
 printf("Enter two numbers(intervals): ");
 scanf("%d %d",&l,&u);
 printf("Armstrong numbers between %d and %d are: ", l, u);
 // iterate number from (l+1) to (u-1)
 // In each iteration, check if number is Armstrong
 for(a=l+1; a<u; ++a)
 {
   b=a;
   // number of digits calculation
   while(b!=0)
   {
     b/=10;
     ++count;
   }
    b=a;
    // result contains sum of nth power of individual digits
    while(b!=0)
    {
      rem = b%10;
      result += pow(rem, count);
      b/=10;
    }
     // check if number is equal to the sum of nth power of individual digits
    if ((int)result==a)
    {
     printf("%d ", a);
    }
    // resetting the values
    count=0;
    result=0;
   }
   return 0;
}