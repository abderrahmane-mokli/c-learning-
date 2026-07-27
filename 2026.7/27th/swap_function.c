#include<stdio.h>

void swap (int *a,int *b); 
int main(void)
{
int x,y;
scanf ("%i %i", &x,&y);
swap(&x,&y);
printf("%i %i" , x,y);
}

//the function swap
void swap (int *a,int *b)
{
int temp = *a;
*a = *b;
*b = temp;	
}
