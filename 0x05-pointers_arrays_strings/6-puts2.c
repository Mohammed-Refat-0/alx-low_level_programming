#include "main.h"
/**
 * puts2 - print every other char in string
 *@str: string
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str == '\0')
		{
			break;
		}
		else
		{
			str++;
		}
	}
	_putchar('\n');
}
