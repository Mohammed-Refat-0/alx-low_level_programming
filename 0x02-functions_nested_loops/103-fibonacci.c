#include <stdio.h>
/**
 * main - program that finds the sum of even numbers in 
 *  fibonacci series of value below 4 million
 * Return: 0
 */
int main(void)
{
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long c;
	unsigned long sum = 0;

	while (c <= 4000000)
	{
		c = a + b;
		if ((c % 2) == 0)
		{
			sum = sum + c;
		}
		a = b;
		b = c;
	}
	printf("%ld\n", sum); 
	return (0);
}
