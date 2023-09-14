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

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			if (!va_arg(ap, char*))
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", va_arg(ap, char*));
			}

		}
		else
		{
			if (i != 0)
			{
				printf("%s", separator);
			}
			if (!va_arg(ap, char*))
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", va_arg(ap, char*));
			}
		}
	}
	va_end(ap);
	printf("\n");
}
