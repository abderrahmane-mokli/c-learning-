#include<stdio.h>

int sum (int *arr, int n);
int main (void)
{
	//how many nums
	int n;
	scanf("%i",&n);
	
	//arr creation
	int arr[n];
	for (int i = 0; i<n;i++)
	{
		scanf("%i",&arr[i]);
	}
	
	//printing the result
	printf ("sum: %i",sum (arr,n)); // (when printing a function retunrn , set the parameters with just the variables names)
}

//the sum function
int sum (int *arr, int n)
{
	int sum = 0; //a starting counting value
	int *p = arr; // addressing what arr[0]is holding
	for (int i = 0; i<n;i++)
	{
		sum = sum + *p; 
		p++; //iterating to the next value
	}
	return sum;
}
