#include <stdio.h>
/**
 * main - program that prints the fibonacci series of 50
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	printf("%d, %d, ", a, b);
	c = a + b;
	for (i = 0; i < 50; i++)
	{
		if (i !=50)
		{
			printf("%d, ", c);
		}
		b = c;
		c = c + b;
	}
	printf("\n");
	return (0);
}
