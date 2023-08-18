#include <stdio.h>

/**
 * main - entry point and contains the program "fizzbuzz"
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
}
