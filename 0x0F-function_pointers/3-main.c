#include "3-calc.h"
#include <stdio.h>
/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, output;
	char arg;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	arg = *argv[2];
	if ((arg == '/' || arg == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	output = func(arg1, arg2);
	printf("%d\n", output);
	return (0);
}
