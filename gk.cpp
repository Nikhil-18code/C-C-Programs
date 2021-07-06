#include<iostream>
using namespace std;

class Golu
{
    int n;
  static int count;
    public:
    void getVal(int );
    void display(void);
};
int Golu::count;
void Golu::getVal(int x)
{
    n=x;
    cout<<"Value = "<<n<<endl;
    count++;
}
void Golu::display()
{
    cout<<"Counter = "<<count<<endl;
}
//int Golu::count;
int main()
{
  Golu o1,o2,o3;
  o1.display();
  o2.display();
  o3.display();

  o1.getVal(100);
  o2.getVal(200);
  o3.getVal(300);

  o1.display();
  o2.display();
  o3.display();
  
return 0;
}