#include <stdio.h>
#include <stdlib.h>

//the node struct

struct node{
    int data;
    struct node* next;
};

//the node counting func
int countNode(struct node* head);

int main (void)
{
    struct node* head = malloc(sizeof(struct node*));
    struct node* second = malloc(sizeof(struct node*));


    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = NULL;

    countNode(head);
    printf ("%d",countNode(head));

    free(head);
    free(second);

    return 0;
}

int countNode(struct node* head)
{
    struct node* current = head;
    int count = 0;

    while (current != NULL)
    {
        count = count + 1;
        current = current ->next;
    }
    return count;
}

