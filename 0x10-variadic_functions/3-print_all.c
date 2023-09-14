#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all -  function that prints string, or intger or float or chars
 * @format: number of types of argyments passed to function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *s1 = "";

	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char*);
					if (!s)
						s = "(nil)";
					printf("%s%s", s1, s);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
