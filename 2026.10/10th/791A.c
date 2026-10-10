#include <stdio.h>

int main (void)
{
    int a,b;
    scanf ("%d %d",&a,&b);

    int years = 0;
    while (a<=b){
        a = a*3;
        b =b*2;
        years = years+1;
    }

    printf("%d", years);

    return 0;
}
