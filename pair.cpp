#include<iostream>
#include<utility>
using namespace std;

int main()
{
   /*pair<int,int> pair1;

   pair1.first=56;
   pair1.second=90;

   cout<< pair1.first<<" ";
   cout<< pair1.second;
   */


 /* pair<int,char> pair2 (50,'N');

  cout<<pair2.second<<" ";
  cout<<pair2.first;
  */


   pair<int ,int> pair1=make_pair(4,5);
   pair<int,int> pair2=make_pair(10,9);
   pair<int,double> pair3;

   cout<<"Before swapping pairs:"<<endl;
   cout<<pair1.first<<" "<<pair1.second<<endl;
   cout<<pair2.first<<" "<<pair2.second;
   pair1.swap(pair2);
   cout<<"\n\n";
   cout<<"After swapping pairs:"<<endl;

   cout<<pair1.first<<" "<<pair1.second<<endl;
   cout<<pair2.first<<" "<<pair2.second;

  /* cout<<"\n";

   pair3= make_pair(5,6);
    cout<<pair3.first<<" ";
   cout<<pair3.second;
   */
}