#include "main.h"
/**
 *print_rev - print string in reverse order
 *@s: string
 *Return:void
 */
void print_rev(char *s)
{
	int c = 0;
	int i;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	for (i = c; i > 0; i--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
