#include <stdio.h>
#include <stdlib.h>

// this takes any input the user provides and makes it 0
void setZero(int *p);
int main (void)
{
	//dynamic user input
	int n;
	printf ("what's n?: ");scanf ("%d",&n);
	// using the func
	setZero(&n);
	printf ("naah it's actually n = %d", n);
	return 0;
}

void setZero(int *p)
{
	*p = 0;
}
