#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* insertAtFirst(struct Node* head,int data)
{
    struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->prev=NULL;
    head->prev=ptr;
    ptr->next=head;
    head=ptr;


    return head;
}
struct Node* insertAtEnd(struct Node* head,int data)
{
     struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
     ptr->data=data;
    struct  Node* p=head;  
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    ptr->prev=p;

    return head;
}  
struct Node* insertAfterNode(struct Node* head,int data,struct Node* prevNode)
{
     struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
     struct Node* p=prevNode->next;
     ptr->data=data;
     ptr->next=p;
     prevNode->next=ptr;
     ptr->prev=prevNode;
    p->prev=ptr;
   

    return head;
}  
void traverse(struct Node* head)
{
    // struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
    struct Node* ptr=head;
    //printf("printing elements of linkedlist in original direction:\n");
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    // printf("%d\n",ptr->data);
    
    // printf("printing elements of linkedlist in reverse direction:\n");
    // while(ptr->prev!=NULL)
    // {
    //     printf("%d\n",ptr->data);
    //     ptr=ptr->prev;
    // }
    // printf("%d\n",ptr->data);
}
int main()
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
     head->prev=NULL;
     head->next=second;

     second->data=34;
     second->prev=head;
     second->next=third;

     third->data=67;
     third->prev=second;
     third->next=fourth;

     fourth->data=41;
     fourth->prev=third;
     fourth->next=NULL;
     printf("Before inserting:\n"); 
     traverse(head);
     printf("Ater inserting:\n"); 
     head=insertAtFirst(head,50);
     head=insertAtEnd(head,50);
     head=insertAfterNode(head,50,second);
     traverse(head);
}