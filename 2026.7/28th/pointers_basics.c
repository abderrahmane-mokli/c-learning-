#include<stdio.h>

int main (void)
{
	
//giving a value to a variable and checking it's location, value...	
int x = 9;
int *p = &x;
printf ("%d\n%p\n%p\n%d",x,&x,p,*p);

//changing the variable's value through a pointer
*p = 50;
printf("\n\n%i",x);

//basically
//& is a snitch: it tells where the variable is
//* is a police man, it breaks in and changes things up
}
