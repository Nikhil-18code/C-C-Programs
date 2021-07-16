#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     long long int n,d;
     cin>>n>>d;
     int i,j,k,l;
    long int a[n],b[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int index=0;
    for(i=d;i<n;i++)
    {
        b[i]=a[i];

        cout<<b[index];
    }
    /*
    for(i=0;i<d;i++)
    {
        b[i]=a[i];
    
    }
    for(i=0;i<n;i++)
    {
        cout<<b[l]<<" ";
    }*/
    cout<<endl;
  }
return 0;
}