#include <stdio.h>

int main (void)
{
    do{ // starting an infinite loop
    int n; // getting the input from the user
    printf ("enter a whole number ");
        
    if (scanf ("%d" , &n) != 1) // closing the (input = character) edge case 
        {
            printf ("i said a number you funny one\n");
            break;
        }
        
        if (0 == n % 2) // using modulo math to check even or odd
    {
        printf ("even\n");
    }
        else
    {
        printf ("Odd\n");
    }
        
        
    }while(1); // the end of the infinite loop
}
