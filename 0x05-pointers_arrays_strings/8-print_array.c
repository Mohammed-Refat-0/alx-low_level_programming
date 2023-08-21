#include "main.h"
#include <stdio.h>
/**
 *print_array - print certain numbers of elements in array
 *@n: number of elements to print
 *@a: array
 *Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (i; i <= n - 1; i++)
	{	
		printf("%d", *a);
		if (i != n - 1)
		{
			printf(", ");
		}
		a++;
	}
	printf("\n");
}
