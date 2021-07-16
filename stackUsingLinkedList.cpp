#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};
void traversal( Node* ptr)
{
    while (ptr!=nullptr)
    {
        printf("%d\n",*ptr);
        ptr=ptr->next;
    }    
}
int isFull(Node* top)
{
    Node* p=new Node();
    if(p==nullptr)
      return 1;
    else 
      return 0;  
}
int isEmpty(Node* top)
{
    if(top==nullptr)
      return 1;
      else
       return 0;
    // return !top;
}
void push(Node** top,int data)
{
    if(isFull(*top))
       cout<<"Stack Overflow"<<endl;
    else{
        Node* ptr=new Node();
        ptr->data=data;
        ptr->next=*top;
        *top=ptr;
        cout<< data<<" Pushed to the stack"<<endl;
    }   
}
int pop(Node* top)
{
    if(isEmpty(top))
       cout<<"Stack Underflow"<<endl;
    else{
        Node* ptr=top;
        top=top->next;
        int poppedElement=ptr->data;
        delete(ptr);
        return poppedElement;
    }   
}
int main()
{
    Node* top=nullptr;
    push(&top,45);
    push(&top,58);
    push(&top,69);
    push(&top,101);
    //cout<<"Original Stack:"<<endl;
    traversal(top);
    int popped=pop(top);
    cout<<popped<<" popped from the stack.";
    //cout<<"Stack after popping the top element:"<<endl;
    traversal(top);

    return 0;
}