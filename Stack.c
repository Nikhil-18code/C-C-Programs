#include <stdio.h>
#include <stdlib.h>

struct Stack
{
   int size;
   int top;
   int *arr;
};
int isEmpty(struct Stack* s)
{
    if(s->top==-1)
       return 1;
    else
    {
        return 0;
            }

}
int isFull(struct Stack *s)
{
   if (s->top >= s->size - 1)
      return 1;
   else
   {
      return 0;
   }
}

int main()
{
   struct Stack *s;
   s->size = 6;
   s->top = -1;
   s->arr = (int *)malloc(s->size * sizeof(int));
   //pushing elements in a stack
   s->arr[0]=5;
   s->top++;

   if (isEmpty(s))
      printf("The stack is empty \n");
   else
      printf("The stack is not empty \n");
   if (isFull(s))
      printf("The stack is full \n");
   else
      printf("The stack is not full \n");
   return 0;
}