#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @n: number of integers passed to function
 * @separator:string to be printed between every int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%d", va_arg(ap, int));

		}
		else
		{
			printf("%d", va_arg(ap, int));
			printf("%s", separator);
		}
	}
	printf("\n");
}
