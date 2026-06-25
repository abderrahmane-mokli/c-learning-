#include <stdio.h>

int main (void)
{
    int n = 8;
    for (int i = 0; i<n ; i++)
    {
        for (int j = 0; j<n ; j++)
        {
            printf ("(%d,%d)",i,j);
        }
        printf ("\n");
    }
}
