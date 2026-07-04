#include <stdio.h>

int main (void)
{
    // taking input
    int n;
    do{
    printf ("how many inputs ? ");
    scanf ("%d" , &n);
    }while (n <= 0);
    
    //storing inputs in an array
    int arr[n];
    for (int i = 0; i<n ; i++)
    {
        printf ("number %d? ", i+1);
        scanf ("%d" , &arr[i]);
    }
    
    //printing the array in reverse using a for loop that starts from the end
    for (int i = n-1 ; i >= 0; i--)
    {
        printf ("%d\n" , arr[i]);
    }
}
