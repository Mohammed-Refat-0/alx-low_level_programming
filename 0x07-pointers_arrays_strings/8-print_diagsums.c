#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix
 * @a: square matrix
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int *arr = *a[];
	unsigned int sum1 = 0;
	unsigned int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + (arr[i][j]);
			}
		}
		sum2 = sum2 + (arr[i][j - i]);
	}
	printf("%d, %d\n", sum1, sum2);
}
