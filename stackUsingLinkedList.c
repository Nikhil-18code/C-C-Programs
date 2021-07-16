#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
   struct Node* top=NULL;
void display()
{
   struct Node* temp=top;
   if(top==NULL)
     printf("The stack is empty");
   else{
       
       while(temp!=NULL)
       {
           printf("\n%d",temp->data);
           temp=temp->next;
       }
   }  
}
void push(int Data)
{
    struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
    new_node->data=Data;
    new_node->next=top;
    top=new_node;
    printf("%d pushed to the stack!! \n",Data);
}
void pop()
{
    struct Node* temp=top;
    if(top==NULL)
       printf("The stack is empty");
    else
    {
        printf("%d",top->data);
        top=top->next;
        free(temp);
    }   
}
void peek()
{
    if(top==NULL)
       printf("The stack is empty");
    else
       printf("The top element is =%d \n",top->data);   
}
int main()
{
   push(69);
   push(70);
   push(71);
   push(72);
   peek();
   pop();
   display();
}