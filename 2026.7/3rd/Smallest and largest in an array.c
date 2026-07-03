#include <stdio.h>
int main (void)
{
    
    //prompting for how many inputs
    int n;
    printf ("how many inputs ? ");
    scanf ("%d" , &n);
    
    //filling the array
    int list[n];
    for (int i = 0; i < n ; i++)
    {
        printf ("input %d " , i+1);
        scanf ("%d" , &list[i]);
    }
    
    //finding the largest
    int largest = list[0];
    for (int i = 0; i < n ; i++)
    {
        if (list[i] > largest)
        {
            largest = list[i];
        }
    }
    //finding the smallest
    int smallest = list[0];
    for (int i = 0; i < n ; i++)
    {
        if (list[i] < smallest)
        {
            smallest = list[i];
        }
    }
    
    //output
    printf ("\n\nthe smallest input is %d\nthe largrst input is %d", smallest , largest);
}
