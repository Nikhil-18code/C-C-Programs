#include<stdio.h>
int main()
{
 int i,j,k,R1,C1,R2,C2,sum=0;
 int A[R1][C1],B[R2][C2],M[R1][C2];
 printf("Enter the number of rows and columns of matrix A--\n");
 scanf("%d%d", &R1,&C1);
 printf("Enter the elements of matrix A--\n");
 for(i=0;i<R1;i++)
 for(j=0;j<C1;j++)
  scanf("%d", &A[i][j]);
 printf("Enter the number of rows and columns of matrix B--\n");
 scanf("%d%d", &R2,&C2);
 if(C1!=R2)
 printf("The Multiplication isn't possible .\n");
 else
 {
 printf("Enter the elements of matrix B--\n");
 for(i=0;i<R2;i++)
 for(j=0;j<C2;j++)
  scanf("%d", &B[i][j]);
 for(i=0;i<R1;i++)
 {
  for(j=0;j<C2;j++)
  {
   for(k=0;i<R2;k++)
   {
    sum=sum + A[i][k]*B[k][j];
   }
   M[i][j]=sum;
   sum=0;
   }
  }
  printf("The product of those matrices is:\n");
  for(i=0;i<R1;i++)
  {
   for(j=0;j<C2;j++)
    printf("%d\t",M[i][j]);
    printf("\n");
   }
  }
  return 0;
 }