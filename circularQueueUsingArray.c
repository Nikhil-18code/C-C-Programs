#include<stdio.h>

int arr[5];
int front=-1;
int rear=-1;
void enqueue(int value)
{
    if(front==-1 && rear==-1)
      {
          front=rear=0;
          arr[rear]=value;
          printf("%d pushed to the circular queue\n",value);
      }
      else if((rear+1)%5==front)
         printf("The circular queue is Full!! \n");
      else{
        rear=(rear+1)%5;
        arr[rear]=value;
        printf("%d pushed to the circular queue\n",value);
      }   
}
void dequeue()
{
    if(front==-1)
       printf("The circular queue is empty\n");
    else if(front==rear)
        front =rear=0;   
    else
    {
        printf("The dequeued element is %d\n",arr[front]);
        front=(front+1)%5;
    }    
}
int main()
{
    enqueue(40);
    enqueue(45);
    enqueue(50);
    enqueue(55);
    enqueue(60); 
    enqueue(65);
   dequeue(); 
   dequeue(); 
   enqueue(100);
   enqueue(105);
    return 0;
}