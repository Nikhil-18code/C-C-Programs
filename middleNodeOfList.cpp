//FINDING MIDDLE ELEMENT OF A SINGLY LINKED LIST
//METHOD:-1
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void push(Node **head, int data)
{
    //Allocating memory for a new Node
    Node *new_node = new Node();

    //Giving the value to newly created node
    new_node->data = data;

    //connecting new node to head node
    new_node->next = *head;

    //making new_node as head node
    *head = new_node;
}
int middleNode(Node* head)
{
    int count=0;
    Node* ptr=head;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        count++;
    }
   // cout<<count;
   int x=count/2;
   Node* p=head;
   while(x--)
   {
      p=p->next;
   }
    return p->data;
}
void traverseList(Node *head)
{
    Node *traversal = head;
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
    Node *head = NULL;
    push(&head, 43);
    push(&head, 22);
    push(&head, 31);
    push(&head, 50);
    push(&head, 90);

    // printf("The list elements are:",traverseList(head));
    //    cout<<"The elements of list are:"<<endl;
    //     traverseList(head);
    //cout<<"The middle element of the list is "<<
    middleNode(head);
   return 0;
}
//-------------------------------------------------------------------------------
//METHOD-2
//ONLY THE FUNCTION WHICH DOES THIS IS SHOWN HERE REST PROGRAMME IS THE SAME
// int middleNode(Node*head)
// {
//     Node* single=head;
//     Node* p=head;
//    while(p!=NULL && p->next!=NULL)
//    {
//        p=p->next;
//        p=p->next;
//        single =single->next;
//    }
//    return single->data;
// }