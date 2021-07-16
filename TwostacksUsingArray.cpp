#include<bits/stdc++.h>
using namespace std;
class Stacks
{
    int top1,top2,size;
    int *arr;
    public:
    //int n;
   Stacks()
   {
    size=6;
    arr=new int[size];
    top1=size/2;
    top2=size/2-1;
   }

    void push1(int data)
    {
        if(top1>0)
        {
            top1--;
            arr[top1]=data;
            cout<<data<<" pushed to the stack1!"<<endl;
        }
        else
           cout<<"Stack1 Overflow!! by element "<<data<<endl;
    }
    void push2(int data)
    {
        if(top2<size-1)
        {
            top2++;
            arr[top2]=data;
            cout<<data<<" pushed to the stack2!"<<endl;
        }
        else
           cout<<"Stack2 Overflow!! by element "<<data<<endl;
    }
    int pop1()
    {
        if(top1>=0)
        {
            int popped=arr[top1];
            top1++;
            return popped;
        }
        else{
           cout<<"Stack1 Underflow!!"<<endl;
           exit(1);
        }
    }
    int pop2()
    {
        if(top2>=size/2)
        {
            int popped=arr[top2];
            top2--;
            return popped;
        }
        else
        {
           cout<<"Stack2 Underflow!!"<<endl;
           exit(1);
        }
    }
    void display1()
    {
        printf("Elements of stack1 are: ");
        for(int i=0;i<size/2;i++)
            cout<< arr[i]<<" ";
         printf("\n");   
    }
    
    void display2()
    {
        printf("Elements of stack2 are: ");
        for(int i=size-1;i>size/2-1;i--)
            cout<< arr[i]<<" ";
    }
};
int main()
{
    Stacks s;
    s.push1(50);
    s.push1(100);
    s.push1(12);
    s.push1(10);
    s.push1(120);
    s.push2(50);
    s.push2(500);
    s.push2(34);
    s.push2(30);
    cout<<"The popped element is :"<<s.pop1()<<endl;
    s.display1();
    //cout<<"The popped element is :"<<s.pop2()<<endl;
    s.display2();

    return 0;
}
