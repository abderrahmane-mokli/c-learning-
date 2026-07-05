#include <stdio.h>

int main (void)
{
    //inputs number
    int n;
    do{
    printf ("how many ? ");
    scanf ("%d" , &n);
    }while (n <= 0);
    
    // array filling
    int arr[n];
    for (int i = 0; i<n ; i++)
    {
        printf ("number %d? ", i+1);
        scanf ("%d" , &arr[i]);
    }
    // finding largest and it's position
    int largest = arr[0];
    int index;
    for (int i = 0; i<n ; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            index = i;
        }
    }
    
    
    //finding second largest by neglecting the largest
    int second = 0;
    for (int i = 0 ; i<n ; i++) // 
    {
        if (arr[i] > second && i != index)
        {
            second = arr[i];
        }
    }
    
    printf ("the second largest is: %d" , second);
}

