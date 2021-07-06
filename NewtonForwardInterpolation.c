
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
main()
{
  float x[20], y[20], f, s, h, d, p;
  int j, i, n;
  printf("enter the value of n :");
  scanf("%d", &n);
  printf("enter the elements of x:");
  for (i = 1; i <= n; i++)
  {
    scanf("%f", &x[i]);
  }
  printf("enter the elements of y:");
  for (i = 1; i <= n; i++)
  {
    scanf("%f", &y[i]);
  }
  h = x[2] - x[1];
  printf("Enter the value of f:");
  scanf("%f", &f);
  s = (f - x[1]) / h;
  p = 1;
  d = y[1];
  for (i = 1; i <= (n - 1); i++)
  {
    for (j = 1; j <= (n - i); j++)
    {
      y[j] = y[j + 1] - y[j];
    }
    p = p * (s - i + 1) / i;
    d = d + p * y[1];
  }
  printf("For the value of x=%6.5f THe value is %6.5f", f, d);
  getch();
}
// #include<stdio.h>

// int main()
// {
//  int i,n,j,k;
//  float x0[20],y[20],f[10][10],X,Y[10],h,u,p;
//  printf("Enter the number of data pairs: ");
//  scanf("%d",&n);
//  printf("Enter the initial value of x: ");
//  scanf("%f",&x0[0]);
//  printf("Enter the step size h: ");
//  scanf("%f",&h);
//  for(int c=0;c<n;c++)
//  {
//      x0[c+1]=x0[c]+h;
//      printf("Enter the value of y for x=%f: ",x0[c]);
//      scanf("%f",&y[c]);
//  }
//  printf("Enter the value of X for which value of Y is required: ");
//  scanf("%f",&X);
//  for(j=0;j<n;j++)
//    f[0][j]=y[j];
//  for(i=1;i<n+1;i++)
//  {
//    for(j=0;j<n+1-i;j++)
//      f[i][j]=f[i-1][j+1]-f[i-1][j];
//  }
//   u=(X-x0[0])/h;
//    Y[k]=y[0];
//   printf("///////");
//    p=1.0;
//    for(i=1;i<n;i++)
//    {
//        p=p*(u-i+1)/i;
//        Y[k]=Y[k]+(p*f[i][0]);printf("%f",Y[k]);
//    }
//    printf("\nFor X= %f we have Y = %f",X,Y[k]);
//  return 0;
// }