#include<stdio.h>
int count=1;
void get(int n)
{
    count++;
    if(n<1)
      return;
      get(n-1);
      get(n-3);
      printf("%d ",n);
}
int main()
{
    get(6);
printf("count =%d",count);
return 0;
}