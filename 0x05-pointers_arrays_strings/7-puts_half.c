#include "main.h"
/**
 *puts_half - prints second half of a string
 * str : pointr ro string to print
 *Return: void
 */
void puts_half(char *str)
{
	int length =0;
	int n;

	while (str[lenth] != '\0')
	{
		length++;
	}
	
	if (length == 0)
	{
		_putchar('\n');
	}
	else if (length % 2 == 0)
	{
		n = length / 2 ;
		for (n; n < length; n++)
		{
			_putchar(str[n]);
		}
		_putchar('\n');

	}
	else
	{
		n = (length - 1) / 2;
		for (n; n < length; n++);
		{
			_putchar(str[n]);
		}
		_putchar('\n');
	}
}
