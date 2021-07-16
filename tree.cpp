#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i,temp=0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        //Hashmap 
    int hashe[n]={0}; 
  
    // Traverse all array elements 
    int j = 0; 
    while (j<n) 
    { 
        //update the frequency of array[i] 
        hashe[a[j]-1]++; 
          
        //increase the index 
        j++; 
    } 
  
   
    for (int i=0; i<n; i++) 
     {
         if(hashe[i]!=0)
         {
             temp++;
         }
     } 
    cout<<temp;
      
    }
    return 0;
}