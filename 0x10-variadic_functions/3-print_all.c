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
	va_list ap;
	unsigned int i, j;
	char arg[] = "cifs";
	char *arg1[] = {"char", "int", "float", "string"};
	char *arg2[] = {"%c", "%i", "%f", "%s"};

	va_start (ap,format);
	j = 0;
	while (format)
	{
		i = 0;
		while ( i < 4)
		{
			if (arg[i] == format[j])
			{
				if (arg[i] == 's' && !(va_arg(ap, char*)))
				{
					printf("(nil)");
					break;
				}
				else
				{
					printf(arg2[i], va_arg(ap, arg1[i]);
					break;
				}
			}
		}
		j++;
	}
	va_end(ap);
	printf("\n");
}
