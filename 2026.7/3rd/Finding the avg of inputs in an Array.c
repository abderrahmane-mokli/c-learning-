#include <stdio.h>
int main (void)
{
    //prompting for inputs number
    int n;
    printf ("how many inputs ? ");
    scanf ("%d" , &n);
    
    // filling up the array
    int arr[n];
    for (int i = 0; i<n ; i++)
    {
        printf ("input number %d " , i+1);
        scanf ("%d" , &arr[i]);
    }
    
    // finding the sum then the avg
    int sum = 0;
    float avg;
    
    for (int i = 0; i<n ; i++)
    {
        sum = sum + arr[i];
    }
    avg = (float)sum/n;
    
    //finale output
    printf("the avg is %.2f" , avg);
}

