#include <stdio.h>

int main (void)
{
    int n; // getting the number from the user
    printf ("input a number   ");
    scanf ("%d" , &n);
    
    if (n >= 0) // if its positive it stays
    {
        printf ("%d" , n);
    }
    if (n <= 0) // if its negative it flips
    {
        n = -n;
        printf ("%d" , n);
    }
    return 0;
    
}
