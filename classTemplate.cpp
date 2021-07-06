#include<bits/stdc++.h>
using namespace std;
int largestNum(int*,int);
int smallestNum(int*,int);
class NumType
{
   
   public:6
    NumType()
    {
       int size;
        cout<<"Enter the size of the array: ";
        cin>>size;
        cout<<"\nEnter the elements of the array ";
       int arr[size];
       for(int i=0;i<size;i++)
          cin>>arr[i];
       for(int i=0;i<size;i++)
          cout<< arr[i]<<" "; 
       int max=largestNum(arr,size);
       cout<<"The largest element in the array is "<< max<<endl;
       int min=smallestNum(arr,size);
       cout<<"The smallest element in the array is "<<min<<endl;

    }
     int largestNum(int a[],int n)
     {
         int max=a[0];
        //int max;
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
              max=a[i];
        }
       return max;
     }
     int smallestNum(int a[],int n)
     {
         int min=a[0];
        //int max;
        for(int i=0;i<n;i++)
        {
            if(a[i]<min)
              min=a[i];
        }
        return min;
     }
};
int main()
{   
 NumType n1;
return 0;
}