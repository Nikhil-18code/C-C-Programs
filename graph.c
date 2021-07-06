#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void read_graph(struct node *a[], int v);
void print(struct node *a[], int v);
int main()
{
    //SdiEUFHNDSJFEORlfdjbsl
    int nodes, i;
    printf("Enter the number of vertices:");
    scanf("%d", &nodes);
    struct node *adj[nodes];
    for (i = 0; i < nodes; i++)
        adj[i] = NULL;
    read_graph(adj, nodes);
    print(adj, nodes);
    return 0;
}
void read_graph(struct node *a[], int v)
{
    int i, j, k, val;
    struct node *last = NULL;
    for (i = 0; i < v; i++)
    {
        printf("\nEnter the number of adjacent vertices for %d :", i + 1);
        scanf("%d", &k);
        for (j = 0; j < k; j++)
        {
            printf("\n Enter the value of adjacent vertices of %d :", j + 1);
            scanf("%d", &val);
            struct node *new_node = (struct node *)malloc(sizeof(struct node));
            new_node->data = val;
            new_node->next = NULL;
            if (a[i] == NULL)
                a[i] = new_node;
            else
                last->next = new_node;
            last = new_node;
        }
    }
}
void print(struct node* a[],int v)
{
    for(int i=0;i<v;i++)
    {
        while(a[i]!=NULL)
        {
            printf("%d ",a[i]->data);
            a[i]=a[i]->next;
        }
    }
}