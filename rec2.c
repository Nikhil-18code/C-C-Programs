#include<stdio.h>

int func(int n)
{
    if(n>0)
    {
        func(n-1);
        printf("%d",n);
        func(n-1);
    }
     //return func(func(n+11)); 
}
int main()
{
    func(4);return 0;
}