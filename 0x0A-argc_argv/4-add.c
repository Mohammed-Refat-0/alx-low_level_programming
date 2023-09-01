#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the addition of positive nums
 * @argc: The number of arguments passed
 * @argv: array of pointers to the arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int n, i;
	int sum = 0;

	for (n = 1; n < argc; n)
	{
		for (i = 0; argv[n][i]; i++)
		{
			if (argv[n][i] < '0' || argv[n][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
