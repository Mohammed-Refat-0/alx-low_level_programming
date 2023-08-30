#include "main.h"
/**
 *_print_rev_recursion - prints a string in reverse recursivley
 *@s: pointer to string to print
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
