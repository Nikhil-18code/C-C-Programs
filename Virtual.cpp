#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void disp()
    {
        cout<<"Base is executed"<<endl;
    }
};

class Derived:public Base
{
    void disp()
    {
        cout<<"Derived is executed"<<endl;
    }
};
int main()
{
Base *obj;
Derived obj1;
obj=&obj1;

obj->disp();
return 0;
}