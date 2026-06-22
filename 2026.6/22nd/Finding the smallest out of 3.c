#include <stdio.h>

int main (void)
{
    int x;
    printf ("input the first number\n");
    scanf ("%d" , &x);
    
    int y;
    printf ("input the second number\n");
    scanf ("%d" , &y);
    
    int z;
    printf ("input the third number\n");
    scanf ("%d" , &z);
    
    
    int the_smallest = x; // assuming x is the smallest for now
    
    //let's compare it to the next numbers
    
    if (the_smallest>y) 
    {
        the_smallest = y;
    }
    if (the_smallest>z)
    {
        the_smallest = z;
    }
        
    
        
    printf ("the smallest number is %d ",the_smallest);
    return 0;
}
