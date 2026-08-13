#include <stdio.h>
#include <stdlib.h>

//i already did this problem before, but now i actually understand what's happening

void swap (int *a, int *b);
int main (void)
{
	int x = 10;
	int y = 20;
	
	printf("before x = %d, y = %d", x,y);
	swap (&x,&y);
	printf("\n\nafter x = %d, y = %d", x,y);
	
	return 0;
}


void swap (int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
