#include<stdio.h>

int main (void)
{
	int arr[]={4, 5, 7 ,9 ,10, 67};
	
	int size = sizeof(arr)/sizeof(arr[0]); // 'sizeof'outputs the size in bytes , so you must divide the total size by the size of a single value
	int *p = arr; // it automatically goes to arr[0] address
	
	for (int i = 0;i<size ;i++)
	{
		printf ("%i\n", *p);
		p++;
	}
}
