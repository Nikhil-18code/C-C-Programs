//Implementation of stack using array

#include<bits/stdc++.h>
using namespace std;

class Stack
{
   int *arr;//=new int[size];

    public:
   int size;
   int top;

};
int isEmpty(Stack* ptr)
{
    if(ptr->top==-1)
       return 1;
    else
       return 0;   
}
int isFull(Stack* ptr)
{
    if(ptr->top==ptr->size-1)
       return 1;
    else
       return 0;   
}
int main()
{
    Stack* s;
    s->size=6;
    s->top=-1;
    s->arr=new int[5];
    s->arr[0]=1;
    s->top++;
   
    if(isEmpty(s))
       cout<<"The stack is empty \n";
    else
       cout<<"The stack is not empty \n";  
        
   //  if(isFull(s))
   //     cout<<"The stack is full \n";
   //  else
   //     cout<<"The stack is not full \n";  
        
    return 0;
}