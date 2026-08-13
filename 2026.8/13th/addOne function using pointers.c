#include <stdio.h>
#include <stdlib.h>

//chat gbt gave me an assignment to make a function that adds one to a variable x.

void addOne(int *p);
int main (void)
{
	int x = 10;
	addOne (&x);
	
	return 0;
}
//the function
void addOne(int *p)
{
	*p = *p + 1;
	printf ("%d",*p);
}
