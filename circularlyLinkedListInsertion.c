#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
void traversal(struct Node* head)
{
    
struct Node* ptr=head;
if(head!=NULL)
{
do{
    printf("%d\n",ptr->data);
    ptr=ptr->next;
}while(ptr!=head);

}
}
struct Node* insertAtFirst(struct Node* first,int data )
{
    struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
    struct Node* p=first->next;
    ptr->data=data;
    while(p->next!=first)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=first;
    first=ptr;
    
    return first;
}
struct Node* insertAtLast(struct Node* head,int data )
{
    struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head->next;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    
    
    return head;
}
struct Node* insertAfterNode(struct Node* head,int data ,struct Node* prevNode)
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

      //Allocate the memory for the elements
     head=(struct Node*) malloc(sizeof(struct Node));
     second=(struct Node*) malloc(sizeof(struct Node));
     third=(struct Node*) malloc(sizeof(struct Node));
     fourth=(struct Node*) malloc(sizeof(struct Node));

     head->data=33;
     head->next=second;

     second->data=34;
     second->next=third;

     third->data=67;
     third->next=fourth;

     fourth->data=41;
     fourth->next=head;
     printf("Before insertion:\n");
     traversal(head);
     printf("After insertion:\n");
     //head=insertAtLast(head,50);
     head=insertAfterNode(head,50,second);
     traversal(head);
    }
