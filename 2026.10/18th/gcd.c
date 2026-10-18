//implementation of euclide's algo for finding gcd(a,b)
//we wrote the psuedocode for it in td, so i wrote this as an implementation

#include <stdio.h>

int main (void)
{
    int a,b,r;
    scanf("%i %i",&a,&b);

    if (a > 0 && b > 0){
        while (a%b != 0){
            r = a % b;
            a = b;
            b = r;
        }
        printf ("the gcd is %i",r);
    }
    else {
        printf ("inputs cannot be <= 0");
    }

    return 0;
}
