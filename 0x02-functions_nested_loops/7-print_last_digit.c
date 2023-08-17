#include "main.h"
/**
* print_last_digit - return and print last digit of a number
*Return: 0
*@a : value to be returned and printed
*/
int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
	a *= -1;
	_putchar(a + 48);
	return (a);
}
