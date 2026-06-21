#include <stdio.h>

int main (void)
{
    do {
    int x; // inputing the first number
    printf ("enter the first number ");
    scanf ("%d" , &x);
    
    int y; // inputing the second number
    printf ("enter the second number ");
    scanf ("%d" , &y);
    
    if (x == y) // handeling the edge case of equals
    {
        printf ("enter two numbers that aren't equals\n");
    }
        // the comparison of the two enteries
    else if (x > y)
    {
        printf ("%d is larger than %d \n", x,y);
    }
    else 
    {
        printf ("%d is larger than %d \n", y,x);
    }
        
    }while (1); // an infinite loop that keeps the program asking
}
