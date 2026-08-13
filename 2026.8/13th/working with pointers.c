#include <stdio.h>
#include <stdlib.h>


// sorry for no comments, but i am struggling here to understand pointers, and i think i finally understood them
int main (void)
{
	int x = 42;
	int tmp = 69;
	int *p = &x;
	
	printf ("the value of x is: %d\n",x);
	printf ("the address of x is: %p\n",&x);
	printf ("the address of x is: %p\n",p);
	printf ("the value of x is: %d\n",*p);
	
	p = &tmp;
	*p = 100;
	printf ("\n*p = %d\n",*p);
	printf ("tmp = %d\n",tmp);
	printf ("x = %d\n", x);
	
	
	return 0;
}
