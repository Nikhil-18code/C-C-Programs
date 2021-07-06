#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,k,x,y,cc;
    string str;
    cin>>n>>k>>x>>y;
    vector<int > v;
    //int key;
    v.push_back(x);
    bool flag=true;
    cc=x;
    while(flag)
    {
       cc=(cc+k)%n;
      if(count(v.begin(),v.end(),cc))
         flag=false;
      else
      {
       
        v.push_back(cc);
      }
         
    }
  for(int i=0;i<v.size();)
  {
    if(v[i]==y)
    {
      str="YES";
      i=v.size();
    }
    else
    {
      str="NO";
      i++;
    }
    
  }
    
    cout<<str<<endl;
  }
  
return 0;
}