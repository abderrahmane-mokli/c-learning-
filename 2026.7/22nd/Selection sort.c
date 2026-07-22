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
    for (int i=0; i<n ; i++)
    {
        printf ("number %i? ", i+1);
        scanf ("%i",&nums[i] );
    }
    
    //selection sort algo
    for (int i = 0;i<n-1 ;i++)
    {
        int min=i;
        for (int j=i+1 ; j<n;j++)
        {
            if(nums[min]>nums[j])
            {
                min=j;
            }
        }
        int temp=nums[i];
        nums[i]=nums[min];
        nums[min]=temp;
    }
    
    //print the output
    for (int i = 0;i<n ;i++)
    {
        printf("%i, ", nums[i]);
    }
}
