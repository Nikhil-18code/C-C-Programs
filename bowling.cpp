#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long int n,k,l;
        cin>>n>>k>>l;
         if(k*l<n)
            cout<<-1;
         else if(n>1 && k==1)
            cout<<-1;
         else
         {
             int temp=1;
             for(int i=0;i<n;i++)
             {
               if(temp>k)
                  temp=1;
                cout<<temp++<<" ";  
             }
             cout<<endl;
         }
               
    }
    
return 0;
}