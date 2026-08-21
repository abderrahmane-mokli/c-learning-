#include <stdio.h>
#include <stdlib.h>

//Learned 
//basic memory manipulation 
//structs
//the concept of linked lists


// defining the structur for the node
struct node{
    int data;
    struct node* next;
};

int main (void)
{
    //allocating memory for each node
    struct node* head= malloc(sizeof(struct node));
    struct node* second = malloc(sizeof(struct node));
    struct node* third = malloc(sizeof(struct node));
    struct node* fourth = malloc(sizeof(struct node));
    struct node* fifth = malloc(sizeof(struct node));

    //filling and Linking
    head ->data=10;
    head ->next = second;

    second ->data= 20;
    second ->next = third;

    third->data =30;
    third -> next = fourth;

    fourth ->data = 40;
    fourth -> next = fifth;

    fifth ->data= 50;
    fifth -> next = NULL;

    //printing results
    printf ("%d", head->data);
    printf ("\n%d", second->data);
    printf ("\n%d", third->data);
    printf ("\n%d", fourth->data);
    printf ("\n%d", fifth->data);

    //freeing up memo
    free(head);
    free(second);
    free(third);
    free(fourth);
    free(fifth);

    return 0;
}
