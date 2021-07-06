#include<bits/stdc++.h>
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
void getNodeFromLast(Node* head,int n)
{
    Node* p=head;
    Node*ptr=head;

    int count=0;
    while(count!=n)
    {
        if(p==NULL)
        {
            cout<<"List is not that long"<<endl;
        }
       p=p->next;
       count++;
    }
    while(p!=NULL)
    {
        p=p->next;
        ptr=ptr->next;
    }
    printf("The %d th element from last is = %d",n,ptr->data);
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

    // printf("The list elements are:",traverseList(head));
    //    cout<<"The elements of list are:"<<endl;
    //     traverseList(head);
     int n = 4;
   getNodeFromLast(head,n);
    return 0;
}

