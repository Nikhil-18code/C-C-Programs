#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector< vector <int> > v{{4,6,2},
                             {8,5,7},
                             {3,7,1}};

    
    int m=v.size();
    int n=v[0].size();
cout<<"The vector before sorting first row :\n";

for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}

//sorting the first row of the vector

sort(v[0].rbegin(),v[0].rend());

//printing the vector after sorting first row
cout<<"The vector after sorting first row: \n"; 

for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<< v[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}