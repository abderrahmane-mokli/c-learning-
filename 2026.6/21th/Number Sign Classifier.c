//Write a program that repeatedly asks the user to enter an integer. For each integer entered:

//Print "positive" if the number is greater than zero.

//Print "negative" if the number is less than zero.

//Print "zero" if the number is equal to zero.

//The program should continue accepting numbers indefinitely until it is manually terminated.

//solution :::


#include <stdio.h>

int main (void)
{
    do{ //establishing the infinite loop
    int n;
    printf ("enter a number "); //asking the user for an input 
    scanf ("%d" , &n); // saving the input 

      // filtering the input to give the correct answer 
    if (n > 0) 
    {
        printf ("positive \n");
    }
    else if (n < 0)
    {
        printf ("negative \n");
    }
    else 
    {
        printf ("zero\n");
    }
    }while (2>1); // ending the Infinite loop
    return 0;
}
