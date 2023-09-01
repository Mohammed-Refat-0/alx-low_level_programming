#include <stdio.h>
#include <stdlib.h>
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

	int c = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", c);
	return (0);
}
