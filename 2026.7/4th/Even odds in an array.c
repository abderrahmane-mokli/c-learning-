#include <stdio.h>

int main (void)
{
    //program explaination
    printf ("//this program takes user inputs and check if they are even or odd\n\n");
    int n;
    
    // while loop to make sure the user inputs a strictly positive number
    do{
    printf ("how many do you wanna check? ");
    scanf ("%d" , &n);
    }while (n <= 0);
    
    //putting user's enteries in an array
    int list[n];
    for (int i = 0; i < n ;i++)
    {
        printf ("input %d? " , i+1);
        scanf ("%d" , &list[i]);
    }
    //checking for evens in the array
    int evens = 0;
    for (int i = 0; i < n ;i++)
    {
        if (list[i] % 2 == 0)
        {
            evens = evens+1;
        }
    }
    // the final result; odds = total - evens
    printf ("\n\nevens are: %d\nodds are: %d" , evens , n-evens);
}
