#include "main.h"
/**
 *_puts_recursion - prints a string recursivley
 *@s: pointer to string to print
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		s++;
		_puts_recursion(s);
	}
}
