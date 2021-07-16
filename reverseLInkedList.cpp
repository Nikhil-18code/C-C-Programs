#include<bits/stdc++.h>
using namespace std;
class Reverse
{
public:
    int data;
    Reverse *next;
};
void push(Reverse **head, int data)
{
    //Allocating memory for a new Node
    Reverse *new_node = new Reverse();

    //Giving the value to newly created node
    new_node->data = data;

    //connecting new node to head node
    new_node->next = *head;

    //making new_node as head node
    *head = new_node;
}
void reverse(Reverse** head)
{
  Reverse* current=*head;
  Reverse* prev=NULL;
  Reverse * next=NULL;

  while(current!=NULL)
  {
      // setting the next pointer
      next=current->next;
      //reverse current node's pointer
      current->next=prev;
       //moving pointers one position ahead
      prev=current;
      current=next;
  }
  
  *head=prev;
}
void traverseList(Reverse *head)
{
    Reverse *traversal = head;
    while (traversal->next != NULL)
    {
        printf("%d\n", traversal->data);
        traversal = traversal->next;
    }
    printf("%d\n", traversal->data);
}
int main()
{
// Node* s;
    Reverse *head = NULL;
    push(&head, 43);
    push(&head, 22);
    push(&head, 31);
    push(&head, 50);

   cout<<"The normal linked list is:\n";
   traverseList(head);
   reverse(&head);
   cout<<"The linked list after reversing is:\n";
   traverseList(head);
   return 0;
}