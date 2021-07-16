#include<iostream>
using namespace std;
template<class T>
class power
{
    public:
    T *arr;
    int size;
    power(int m)
    {
     size=m;
     arr=new T[size];
    }
    T dotProduct(power &v)
    {
    T d=0;
        for(int i=0;i<size;i++)
        {
        d+=this->arr[i]*v.arr[i];
        }
        return d;
    }  
};

int main()
{
    
  power<float>v1(3);
   v1.arr[0]=4.3;
   v1.arr[1]=3.4;
   v1.arr[2]=4.4;
  power<float>v2(3);  
   v2.arr[0]=1;
   v2.arr[1]=0;
   v2.arr[2]=1;
   
   float p=v1.dotProduct(v2);
   cout<<p<<endl;
return 0;
}