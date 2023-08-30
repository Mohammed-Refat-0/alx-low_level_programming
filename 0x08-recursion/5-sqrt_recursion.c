#include "main.h"
/**
 *_sqrt_recursion- return natural square root of a number
 * @n: intger to find square root of 
 * Return: value
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1);
}
/**
 *sqrt - to find natural square root
 *@n: value to find squrt for 
 * @i: int
 * Return: value
 */
int sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt(n, i + 1));
}
