#include "main.h"
/**
 *_sqrt_recursion- return natural square root of a number
 * @n: intger to find square root of 
 * Return: value
 */
int _sqrt_recursion(int n)
{
	return (sqrty(n, 1);
}
/**
 *sqrt - to find natural square root
 *@n: value to find squrt for 
 * @i: int
 * Return: value
 */
int sqrty(int n, int i)
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
	return (sqrty(n, i + 1));
}
