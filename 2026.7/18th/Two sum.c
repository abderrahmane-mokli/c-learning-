#include <stdio.h>
int main (void)
{
    // asking inputs
    int n;
    
    printf("how many numbers? ");
    scanf ("%d" , &n);
    if (n < 2 || n > 10000)
    {
        printf ("invalid\n");
        return 1;
    }
    
    //filling the array
    int nums[n];
    for (int i = 0 ;i<n ;i++)
    {
        printf ("number %d?" , i+1);
        scanf ("%d" , &nums[i]);
        if (nums[i] < -1000000000 || nums[i] >1000000000)
        {
            printf("invalid\n");
            return 1;
        }
        
    }
    
    //ask for the target
    int target;
    printf ("what's the target? ");
    scanf ("%d" , &target);
    if (target < -1000000000 || target >1000000000)
        {
            printf("invalid\n");
            return 1;
        }
    
    
    //finding the solution
    for (int i = 0 ;i<n ;i++)
    {
        for (int j = i+1 ;j<n;j++)
        {
            if (nums[i] + nums[j] == target && i!=j )
            {
                printf ("[%d , %d]\n" , i , j);
            }
        }
    }
}

