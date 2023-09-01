#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiple and  prints two numbers
 * @argc: number of arguments
 * @argv: array of string arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int n1, n2, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	c = n1 * n2;
	printf("%d\n", c);
	return (0);
}
