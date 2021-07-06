#include<stdio.h>
#include<stdlib.h>
 
 struct Node
 {
     int data;
     struct Node * next;
 };
 struct Node *front=NULL;
 struct Node *rear=NULL;

 void enqueue(int data)
 {
     struct Node *newnode;
     newnode = (struct Node*)malloc(sizeof(struct Node));
     newnode->next=NULL;
     newnode->data=data;
     if (front== NULL)
     {
        front=newnode;
        rear=newnode;
     }
     else
     {
        rear->next=newnode;
        rear=newnode;  
     }
     
 }
 void dequeue()
 {
     if (front == NULL)
     {
         printf("No element in queue\n");
     }
     else
     {
         struct Node * t;
         t = front;
         printf(" dequeued data = %d\n",t->data);
         front = t->next;
         free(t);

     }
     
}
void display()
{
   struct Node* ptr=front;
   while(ptr!=NULL)
   {
       printf("%d ",ptr->data);
       ptr=ptr->next;
   }
    printf("\n");
}
int main()
{
    
 enqueue(75);
 enqueue(65);
 enqueue(55);
 enqueue(45);
 printf("Queue elements before dequeue: ");
 display();
 dequeue();
 dequeue();
 printf("Queue elements after dequeue: ");
 display();
    
   return 0;
}