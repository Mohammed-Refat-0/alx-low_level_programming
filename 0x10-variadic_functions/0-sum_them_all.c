#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - varaic function that sum all its given parameters
 * @n: number of arguments
 * Return: integer result of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int result, i;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		result = va_arg(ap, int) + result;
	}
	va_end(ap);
	return (result);
}
