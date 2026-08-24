#include <stdio.h>
#include <stdlib.h>

//the node struct

struct node{
    int data;
    struct node* next;
};

// func prototype
int findValue(struct node* head,int n);

int main (void)
{
    struct node* head = malloc(sizeof(struct node*));
    struct node* second = malloc(sizeof(struct node*));


    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = NULL;


    int n; scanf("%i",&n);
    printf ("%i",findValue(head,n));


    free (head);
    free (second);

    return 0;
}


int findValue(struct node* head,int n)
{
    struct node* current = head;

    while ( current != NULL)
    {
        if (current->data == n){
            return 1;
        }
        else{
            current = current -> next;
        }
    }
    return 0;
}

