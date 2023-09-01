#include <stdio.h>
#include "main.h"
/**
 * main - multiple and  prints two numbers
 * @argc: number of arguments
 * @argv: array of string arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return(1);
	}
	int c = argv[1] * argv[2];
	printf("%d\n", c);
	return (0);
}
