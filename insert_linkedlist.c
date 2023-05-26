#include <stdio.h>

#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    
   
    struct Node *a_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *b_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *c_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *head;
    head=a_node;
    a_node->data=10;
    a_node->next=b_node;
    b_node->data=20;
    b_node->next=c_node;
    c_node->data=30;
    c_node->next=NULL;
    while(head)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    
    return 0;
}
