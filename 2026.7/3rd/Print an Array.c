// Problem: Print an Array

//Requirements:

//Read 10 integers from the user.
//Store the integers in an array.
//Print the 10 integers in the same order they were entered.
//Output the numbers separated by spaces (or one per line if your instructor specifies).

#include <stdio.h>

int main (void)
{
    int arr[9]; // initializing the array size
    printf ("input 10 numbers...\n\n"); // ordering the user to input 10 numbers 

  // looping to store the user inputs in the array
    for (int i = 0; i < 10 ; i++)
    {
        printf ("enter number %d " , i+1);
        scanf ("%d" , &arr[i]);
    }
    
    printf ("\nuser input is complete\nhere it goes the output\n\n");

  //printing the numbers using a loop
    for (int i = 0; i < 10 ; i++)
    {
        printf ("number %d is %d \n" , i+1 , arr[i]);
    }
    
    printf ("\nthe end.");
    
}
