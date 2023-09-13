#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - calculates the sum of two integers
 * @a:integer
 * @b:integer
 * Return: int of the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substractes two integers
 * @a:integer
 * @b:integer
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: first integer
 * @b: second integer
 * Return: int of the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: integer result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
