#include <stdio.h>

int main (void)
{
    //how many inputs in the array
    int n;
    do{
    printf("how many numbers ? ");
    scanf ("%d" , &n);
    }while (n<= 0);
    
    //filling the array
    int arr[n];
    for (int i = 0; i< n ; i++)
    {
        printf ("number %d? " , i+1);
        scanf ("%d" , &arr[i]);
    }
    
    //asking the user for his search request
    int num;
    int found = 0;
    printf ("looking for ? ");
    scanf ("%d",&num);
    
    // searching in the array
    for (int i = 0; i< n ; i++)
    {
        if (num == arr[i])
        {
            printf ("the variable index is %d" , i);
            found = found + 1;
        }
    }
    //if the user is looking for a number that doesn't exist
    if (found == 0)
    {
        printf ("not found");
    }
}
