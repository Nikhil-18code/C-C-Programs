#include<iostream>
using namespace std;
int main()
{
    //  int *p;
    //  p=new int[5];
    int p[5];
     cout<<"Enter the values:\n";
     for(int i=0;i<5;i++)
     {
        //  cin>>*(p+i);
        cin>>p[i];
        
     }
     cout<<"The value in the array:\n";
     
     for (int j = 0; j < 5; j++)
     {
        //  cout<<*(p+j)<<" ";
        cout<<p[j]<<"\t";
        
     }
     
return 0;
}