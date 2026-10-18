//a program that tells if there are solutions for the second deg eaq with the given a,b,c
//I wrote this as an example for if conditions because we just took it today in algo 
#include <stdio.h>

int main (void)
{
    float a,b,c;
    scanf ("%f %f %f",&a, &b ,&c);

    float D = (b*b)-(4*a*c);
    printf ("delta is :%f\n",D);

    if (D >= 0){
        printf ("there are solutions in R");
    }
    else{
        printf("no solutions in R");
    }

    return 0;
}
