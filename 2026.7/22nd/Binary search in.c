#include<stdio.h>

int main (void)
{
    //arr size
    int n;
    do{
    printf("how many? ");
    scanf("%i" , &n);
    }while (n<1 || n>100);
    
    //arr filling
    int nums[n];
    printf ("input ascending numbers\n");
    for (int i=0; i<n ; i++)
    {
        printf ("number %i? ", i+1);
        scanf ("%i",&nums[i] );
    }
    
    //sorting check
    for(int i=0 ; i<n-1 ; i++)
    {
        if (nums[i]>nums[i+1])
        {
            printf ("list not sorted, try again");
            return 0;
        }
    }
    
    //ask for target
    int target;
    printf("what's the target  ");
    scanf ("%i", &target);
    
    //binary search algo
    int low = 0;
    int high = n-1;
    int mid;
    int found = 0;
    while (low<=high)
    {
        mid = (low+high)/2;
        if (nums[mid] == target)
        {
            printf("found in index %i :)" , mid);
            found = 1;
            break;
        }
        else if (target > nums[mid])
        {
            low = mid +1;
        }
        else
        {
            high = mid-1;
        }
    }
    if (found == 0)
    {
        printf ("\nnot found :(");
    }
}
