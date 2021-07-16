#include<stdio.h>
int stack[5];
int a[5]={12,13,14,15,16};
int top=-1;
int p=0;
void push()
{
    
    if(top>4)
    {
       printf("Stack Overflow\n");
    }
    else{
        
        top++;
        stack[top]=a[p];
        p++;
        printf("%d pushed into stack\n",stack[top]);
    }
}
void pop()
{
    //int b[5];
    if(top==-1)
    {
       printf("Stack underflow\n");
    }
    else{
        printf("%d popped from the stack",stack[top]);
       top--;

    }
}
void peek()
{
        printf("Top element of the stack is ",stack[top]);
}
void display()
{
    for(int i=top;i>=0;i--)
         printf("%d ",stack[i]);
}
int main()
{
    int oper;
    printf("Enter the number of operations:");
    scanf("%d",&oper);
    while(oper--)
    {
    int choice;
   
    printf("\nEnter any choice from 1 to 4:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        peek();
        break;
        case 4:
        display();
        break;
    }}
    return 0;
}