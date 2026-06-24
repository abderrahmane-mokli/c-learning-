#include <stdio.h>

int main(void) 
{
    int n;
    do
    {
        printf ("what the height from 1 to 8  ");
        scanf ("%d" , &n);
    } while ( n < 1 || n > 8);
    
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0 ; j <= n-i-1 ; j++ )
        {
            printf (" ");
        }
        for (int k = 0 ; k <= i ; k++)
        {
            printf ("#");
        }
        printf ("\n");
    }
}
