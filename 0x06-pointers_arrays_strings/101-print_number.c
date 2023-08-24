#include "main.h"
/**
 * print_number - prints an integer
 * @n: int
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar(45);
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + 48);
}
