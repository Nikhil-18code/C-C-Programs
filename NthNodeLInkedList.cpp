//FINDING Nth NODE OF A LINKED LIST USING ITERATION
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
int getNode(Node *head, int n)
{
    Node *present = head;
    int count = 0;
    while (present->next != NULL)
    {
        if (count == n)
        {
            return (present->data);
            break;
        }
        count++;
        present = present->next;
    }
    //assert(0);
    //return present->data;
}
void push(Node **head, int data)
{
    //Allocating memory for a new Node
    Node *new_node = new Node();

    //Giving the value to newly created node
    new_node->data = data;

    //connecting new node to head node
    new_node->next = *head;

    //making new_node as head node
    *head = new_node;
}
void traverseList(Node *head)
{
    Node *traversal = head;
    while (traversal->next != NULL)
    {
        printf("%d\n", traversal->data);
        traversal = traversal->next;
    }
    printf("%d\n", traversal->data);
}
int main()
{
    // Node* s;
    Node *head = NULL;
    push(&head, 43);
    push(&head, 22);
    push(&head, 31);
    push(&head, 50);

    // printf("The list elements are:",traverseList(head));
    //    cout<<"The elements of list are:"<<endl;
    //     traverseList(head);
    int n = 2;
    cout << "The element at index " << n << " is equal to " << getNode(head, n);
    return 0;
}

//FINDING Nth NODE OF A LINKED LIST USING RECURSION
//EVERY FUNCTION WILL REMAIN THE SAME EXCEPT FOR THE GETnODE FUNCTION

// int getNode(Node* head,int n)
// {
//     if(head==NULL)
//        return -1;

//     int counter=0;
//        if(counter==n)
//           return head->data;

//        return(getNode(head->next,n-1));      
// }