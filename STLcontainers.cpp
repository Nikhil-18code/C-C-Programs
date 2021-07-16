#include<bits/stdc++.h>
using namespace std;
int main()
{
   deque<int> d={4,6,2,6,7,34};
   deque<int> d1(6 ,50);
    // d.push_back(100);
    // cout<<d.size();
    d.swap(d1);
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<" "<<endl;
    }
     for(int i=0;i<d.size();i++)
    {
        cout<<d1[i]<<" "<<endl;
    }
return 0;
}