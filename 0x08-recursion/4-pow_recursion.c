#include "main.h"
/**
 *_pow_recursion - riase x to the power of y
 * @x: value to raise
 * @y: power to raise by
 * Return: value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x,(y - 1)));
	}
}
