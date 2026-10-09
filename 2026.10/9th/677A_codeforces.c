#include <stdio.h>

int main (void)
{
    int n,h;
    scanf ("%d %d", &n,&h);

    int heights[n];
    for (int i = 0;i<n;i++){
        scanf("%d",&heights[i]);
    }
    
    int width = 0;
    for (int i = 0;i<n;i++)
    {
        if (heights[i]>h){
            width = width + 2;
        }
        else{
            width = width+1;
        }
    }

    printf ("%d",width);

    return 0;
}
