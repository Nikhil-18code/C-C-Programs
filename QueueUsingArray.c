#include<stdio.h>
int queue[5];
int front=-1,rear=-1;


void displayQueue()
{
    if(front==-1 || front>rear)
    {
       printf("The queue is empty");
       return;
    }
    for(int i=front;i<=rear;i++)
         printf("%d ",queue[i]);
      printf("\n");   
}
void enqueue(int data)
{
    if(rear==4)
    {
      printf("The queue is full");
      return;
    }
    if(front==-1)
      front=0;
     rear++;
     queue[rear]=data;     
}
void dequeue()
{
    if(front ==-1)
    {
        printf("The queue is empty");
        return;
    }    
    front++;
}
void frontValue()
{
    if(front==-1 || front>rear)
    {
        printf("The queue is empty");
        return;
    }
    printf("The front of queue is %d \n",queue[front]);    
}
void rearValue()
{
    if(front==4 || front>rear)
    {
        printf("The queue is empty");
        return;
    }
    printf("The rear of queue is %d \n",queue[rear]);    
}
int main()
{
    enqueue(69);
    enqueue(70);
    enqueue(71);
    enqueue(72);
    displayQueue();
    dequeue();
    displayQueue();
    frontValue();
    rearValue();
    return 0;
}