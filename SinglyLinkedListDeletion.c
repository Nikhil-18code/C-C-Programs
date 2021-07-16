#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
//Traversal of a singly linked list
void traversal(struct Node* ptr)
{
    while (ptr!=NULL)
    {
        printf("%d\n",*ptr);
        ptr=ptr->next;
    }    
}
struct Node* deletingFirstNode(struct Node* head)
{
    struct Node* ptr=head;
    head=head->next;
    free(ptr);
    
    return head;
}
struct Node* innerNodeDeletion(struct Node* head,int index)
{
    struct Node* p=head;
    struct Node* ptr=head->next;

   for(int i=0;i<index-1;i++)
    {
        p=p->next;
        ptr=ptr->next;
    
    }
        p->next=ptr->next;
        free(ptr);
    
    return head;
}
struct Node* deleteAtValue(struct Node* head,int value)
{
    struct Node* p=head;
    struct Node* ptr=head->next;

  while(ptr->data!=value && ptr->next!=NULL)
    {
        p=p->next;
        ptr=ptr->next;
    
    }
    if(ptr->data==value)
         {
              p->next=ptr->next;
              free(ptr);
         }
    return head;
}
struct Node* deleteLastNode(struct Node* head)
{
    struct Node* p=head;
    struct Node* ptr=head->next;

   while(ptr->next!=NULL)
   {
         p=p->next;
        ptr=ptr->next;
    
   }
   p->next=ptr->next;
   free(ptr);
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
     fourth->next=NULL; 
     
     printf("Before deleting:\n");
     traversal(head);
     printf("After deleting:\n");
     //head=deletingFirstNode(head);
     //head=innerNodeDeletion(head,2);
     head=deleteLastNode(head);
     traversal(head);

}