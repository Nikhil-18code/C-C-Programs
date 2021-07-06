#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0;
        cin>>n>>k;
        int a[n];
    
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
           sum=sum+a[i];
        }
        long int count=0; 
        while (sum>=k)
        {
            sum=sum-k;
            count++;
        }
        
        // p=0;
        // for(int i=0;i<n;i++)
        // {
        //     if((a[i]+p)<k)
        //     {
        //       x=i+1;
        //       i=n;
        //     }
        //     else if((a[i]+p)>k)
        //     {
        //         p=a[i]+p-k;
        //     }
            
              
        
        
        cout<<count+1<<endl;
    }
   
return 0;
}