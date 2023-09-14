#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -  function that prints strings, followed by a new line.
 * @n: number of strings passed to function
 * @separator:string to be printed between every string
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char*);
		if (!s)
		{
			s = "(nil)";
		}
		if (!separator)
		{
			printf("%s", s);
		}
		else
		{
			if (i != 0)
			{
				printf("%s", separator);
			}
			printf("%s", s);
		}
	}
	va_end(ap);
	printf("\n");
}
