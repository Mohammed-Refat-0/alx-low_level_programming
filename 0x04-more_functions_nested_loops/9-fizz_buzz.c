#include <stdio.h>
#include "main.h"

/**
 * main - entry point and contains the program "fizzbuzz"
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1 ; i < 101; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
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
	return (0);
}
