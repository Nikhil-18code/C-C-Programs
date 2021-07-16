#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
//Traversal of a singly linked list
void Traversal(struct Node* ptr)
{
  if(ptr==NULL)
    return;
  printf("%d ",ptr->data)  ;
  if(ptr->data!=NULL)
  Traversal(ptr->next->next);
  printf("%d ",ptr->data);
}
//Insertion in the beginning
struct Node* insertAtFirst(struct Node* head,int data) 
{
    struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;

    return ptr;
}
//Insertion at the end
struct Node* insertAtEnd(struct Node* head,int data) 
{
    struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
   ptr->data=data;

    struct Node* p=head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    
    return head;
}

//Insertion at a given index
struct Node* insertAtIndex(struct Node* head,int data,int index) 
{
    struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));

    struct Node* p=head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    
    
    return head;
}

//Insertion after a node
struct Node* insertAfterNode(struct Node* head,struct Node* prevNode,int data) 
{
    struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;

    return head;
}

void main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;
    struct Node* sixth;

      //Allocate the memory for the elements
     head=(struct Node*) malloc(sizeof(struct Node));
     second=(struct Node*) malloc(sizeof(struct Node));
     third=(struct Node*) malloc(sizeof(struct Node));
     fourth=(struct Node*) malloc(sizeof(struct Node));
     fifth=(struct Node*) malloc(sizeof(struct Node));
     sixth=(struct Node*) malloc(sizeof(struct Node));

     head->data=1;
     head->next=second;

     second->data=2;
     second->next=third;

     third->data=3;
     third->next=fourth;

     fourth->data=4;
     fourth->next=fifth;

     fifth->data=5;
     fifth->next=sixth;

     sixth->data=6;
     sixth->next=NULL;
    
    printf("Before inserting:\n");
     Traversal(head);
    //  printf("After inserting:\n");
    //  head=insertAtFirst(head,56);
     //head=insertAtEnd(head,56);
     //head=insertAtIndex(head,56,2);
     //head=insertAfterNode(head,third,56);
    // Traversal(head);

}