#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: argument strings
 * Return: int
 */
int main(int argc, char *argv[])
{
	long mul;
	int i, j;
	
	if (argc != 3)
	{
		printf("Error\n");
	}
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{  
				printf("Error\n");
			}
			exit(98); }
		}
	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%l\n", mul);
	return (0);
}
