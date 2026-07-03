#include <stdio.h>

int main (void)
{
  // prompting the user for how many inputs
    int n; 
    printf ("how many number do you wanna sum ? ");
    scanf ("%d" , &n);
    
    // saving the inputs in an array 
    int inputs[n];
    for ( int i = 0; i < n ; i++)
    {
        printf ("input number %d " , i+1);
        scanf ("%d" , &inputs[i]);
    }
  //summing the inputs
    int sum = 0;
    for (int i = 0 ; i<n ; i++)
    {
        sum = sum + inputs[i];
    }
    //the result 
    printf ("the sum is %d" , sum);
}
