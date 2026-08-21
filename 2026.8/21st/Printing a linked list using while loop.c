#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main (void)
{
    struct node* head = malloc(sizeof(struct node));
    struct node* second = malloc(sizeof(struct node));

    head ->data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = NULL;




    struct node* current = head; //setting up the start as the head

    while (current != NULL) //printing what current hold providing it's not a NULL
    {
        printf ("%d\n",current->data);
        current = current->next;// going to the next node
    }
    printf ("NULL");
    return 0;
}

