#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,reverse=0,count=0,sum=0;
    cout<<"Enter the number you want to check :";
    cin>>n;
    while(n>0)
    {
        int temp=n%10;
        reverse=reverse*10+temp;
        n/=10;
    }
    while(reverse>0)
    {
       int temp=reverse%10;
       count++;
       if(count%2==0)
       {
           sum=sum+(temp*temp);
       }
       reverse/=10;
    }
    cout<<sum<<endl;
    return 0;
}