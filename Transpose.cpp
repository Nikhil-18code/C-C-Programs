#include<iostream>
using namespace std;
int main()
{
	int t=1;
    //cout<<"Enter the testcases"<<endl;
	//cin>>t;
	while(t--)
	{
	    int n,i,j;
       // cout<<"Enter the numbvere if elements"<<endl;
        
	   // cin>>n;
	    int a[3][3]={1,2,3,4,5,6,7,8,9};
        int b[3][3] ;
        cout<<"Enter array elements"<<endl;

	    for(i=1;i<=3;i++)
	    {
	       for( j=1;j<=3;j++)
	       {
	          cin>>a[i][j]; 
	       }
	    }
	   for(i=1;i<=3;i++)
	    {
	       for( j=1;j<=3;j++)
	       {
              a[j][i]=b[i][j];
	        
	       }
	    }
	    for( i=1;i<=3;i++)
	    {
	       for( j=1;j<=3;j++)
	       {
	          cout<<b[i][j]<<" "; 
	       }
	    }
        cout<<endl;
	}
return 0;
}