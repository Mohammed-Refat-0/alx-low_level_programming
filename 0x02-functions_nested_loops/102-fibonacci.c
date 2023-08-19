#include <stdio.h>
/**
 * main - program that prints the fibonacci series of 50
 * Return: 0
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long c;
	int i;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf("%ld", c);
		if (i != 47)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
