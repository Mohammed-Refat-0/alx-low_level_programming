#include "main.h"
/**
*print_alphabet - function that print alphabet
*it prints in lowercase
*Return: void
*/
void print_alphabet(void)
{
	char C = 'a';

	while (C < 123)
	{
		_putchar(C);
		C++;
	}
	_putchar('\n');
}
