#include <stdio.h>

int main(void)
{
    //asking for how many numbers
    int n;
    do {
    printf ("how many? ");
    scanf ("%i" , &n);
    }while (n>100 || n<1);
    
    
    //reading n integers
    int nums[n];
    for (int i = 0; i<n ; i++)
    {
        printf ("number %i " , i+1);
        scanf ("%i" , &nums[i]);
    }
    
    //asking for the target
    int target;
    printf ("\n");
    do {
    printf ("what's the target? ");
    scanf ("%i" , &target);
    }while (target>100 || target<1);
    
    //finding the target
    int found = 0;
    for (int i = 0 ;i<n ;i++)
    {
        if(target == nums[i])
        {
            printf ("the index is %i :)" , i);
            found = 1;
            return 0;
        }
    }
    if (found == 0)
    {
        printf ("not found :(");
    }
}
