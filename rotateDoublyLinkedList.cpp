//Rotate doubly linked list by k nodes
#include<bits/stdc++.h>
using namespace std;
class Rotate
{
    public:
    int data;
    Rotate* next;
    Rotate* prev;
};
void push(Rotate **head, int data)
{
    //Allocating memory for a new Node
    Rotate *new_node = new Rotate();

    //Giving the value to newly created node
    new_node->data = data;

    //connecting new node to head node
    new_node->next = *head;

    //making new_node as head node
    *head = new_node;
}
Rotate* rotate(Rotate* head,int k)
{
    // if(k==0)
    //    return;
      
     int count=1; 
    Rotate* ptr=head;
    while(count<k && ptr!=NULL)
    {
        ptr=ptr->next;
        count++;
    }   
    // if(ptr==NULL)
    //     return;

     Rotate* n=ptr;
     while(ptr->next!=NULL)
         ptr=ptr->next;

     ptr->next=head;
     head->prev=NULL;
     head=n->next;
     n->next=NULL;
    return head;
}
void traverseList(Rotate *head)
{
    Rotate *traversal = head;
    while (traversal->next != NULL)
    {
        printf("%d\n", traversal->data);
        traversal = traversal->next;
    }
    printf("%d\n", traversal->data);
}
int main()
{
    Rotate *head = NULL;
    push(&head, 43);
    push(&head, 22);
    push(&head, 31);
    push(&head, 50);

   cout<<"The normal linked list is:\n";
   traverseList(head);
   cout<<"Enter the number of times you want to rotate"<<endl;
   int p;cin>>p;
   head=rotate(head,p);
   cout<<"The linked list after  is:\n";
   traverseList(head);
return 0;
}