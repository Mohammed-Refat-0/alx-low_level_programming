#include <stdio.h>
#include "main.h"
/**
 * main - prints the nymber of arguments passed
 * @argc: number of arguments
 * @argv: array of string arguments
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
