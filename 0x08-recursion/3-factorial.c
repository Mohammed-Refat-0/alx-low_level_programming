#include "main.h"
/**
 *factorial - returns the factorial of a number
 * @n: number to return the fctorial of.
 * Return: factorial integer
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
