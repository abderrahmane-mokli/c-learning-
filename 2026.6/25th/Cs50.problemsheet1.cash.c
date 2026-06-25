#include <stdio.h>

int main(void) 
{
    int n;
    int coins = 0;
    
    do
    {
        printf ("how much do we owe you?  ");
        scanf ("%d" , &n);
    } while ( n < 0 || n >= 100 );
        
    while (n >= 25)
    {
        n = n - 25;
        coins = coins +1;
    }
    
    while (n >= 10)
    {
        n = n - 10;
        coins = coins +1;
    }
    
    while (n >= 5)
    {
        n = n - 5;
        coins = coins +1;
    }
    
    while (n >= 1)
    {
        n = n - 1;
        coins = coins +1;
    }
    
    printf ("we owe you %d coin(s)\n" , coins);
    
    return 0;
}
