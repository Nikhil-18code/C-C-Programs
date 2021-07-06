#include<iostream>


using namespace std;
class Palindrome 
{
   public:
   int data;
   Palindrome* next;
};
int compare(Palindrome*,Palindrome*);
void reverse(Palindrome**);
void push(Palindrome **head, int data)
{
    //Allocating memory for a new Node
    Palindrome *new_node = new Palindrome();

    //Giving the value to newly created node
    new_node->data = data;

    //connecting new node to head node
    new_node->next = *head;

    //making new_node as head node
    *head = new_node;
}
int isPalindrome(Palindrome* head)
{
    int flag=1;
    if(head!=NULL  && head->next!=NULL)
    {
        Palindrome* fast_ptr=head;Palindrome* slow_ptr=head;
        Palindrome* prev=head;Palindrome* second_half;
        Palindrome* mid_node;
        while(fast_ptr!=NULL && fast_ptr->next!=NULL)
        {
            fast_ptr=fast_ptr->next->next;
            prev=slow_ptr;
            slow_ptr=slow_ptr->next;
        }
        if(fast_ptr!=NULL)
        {
            mid_node=slow_ptr;
           
            slow_ptr=slow_ptr->next;
        }
        second_half=slow_ptr;
        prev->next=NULL;
        reverse(&second_half);
       flag=compare(head,second_half);
        reverse(&second_half);

        if(mid_node!=NULL)
        {
            prev->next=mid_node;
            mid_node->next=second_half;
        }
        else
        {
            prev->next=second_half;
        }
        
    }
    return flag;
}
void reverse(Palindrome** second_half)
{
    Palindrome* current=*second_half;
    Palindrome* prev=NULL;
    Palindrome* next=NULL;
    while(current!=NULL)
    {
        next=current->next;
       
        current->next=prev;
        prev=current;
        current=next;
    }
     *second_half=prev;
}
int compare(Palindrome* head,Palindrome* second_half)
{
    Palindrome* temp1=head;
    Palindrome* temp2=second_half;
    while (temp1!=NULL)
    {
        if(temp1->data==temp2->data)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else
        {
          return 0;
        }
           
    }
    /* Both are empty reurn 1*/
    if (temp1 == NULL && temp2 == NULL) 
        return 1; 
 
    /* Will reach here when one is NULL 
    and other is not */
    return 0; 

}
int main()
{
    Palindrome* head=NULL;
    int a[5]={1,2,3,2,1};
    for(int i=0;i<5;i++)
    {
        push(&head,a[i]);
    }
    if( isPalindrome(head)==1)
        cout<<"List is palindrome";
    else
        cout<<"List is not palindrome" ;   
    return 0;
} 