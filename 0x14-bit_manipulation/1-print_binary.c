#include "main.h"
#include <stdlib.h>
/**
 * print_binary - print the binary reprsentation of a number
 * @n: number to reorsent in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int number = 0;
	unsigned long int position;

	for (i = 63; i >= 0; i--)
	{
		position = n >> i;

		if (position & 1)
		{
			_putchar('1');
			number++;
		}
		else if (number)
		{
			_putchar('0');
		}
	}
	if (!number)
	{
		_putchar('0');
	}
}
