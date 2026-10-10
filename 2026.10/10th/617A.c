#include <stdio.h>

int main (void)
{
    int n,steps = 0;
    scanf ("%d",&n);
    
    
    while (n>=5){
        n = n - 5;
        steps++;
    }
    
    while (n>=4){
        n = n - 4;
        steps++;
    }
    
    while (n>=3){
        n = n - 3;
        steps++;
    }
    
    while (n>=2){
        n = n - 2;
        steps++;
    }
    
    while (n>=1){
        n = n - 1;
        steps++;
    }
    
    printf ("%d",steps);
    
    return 0;
}
