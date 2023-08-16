#include "main.h"
/**
*print_alphabet_x10 - function that print alphabet
*it prints in lowercase 10 times
*Return: void
*/
void print_alphabet_x10(void)
{
	char C = 'a';
	int i;

	for (i = 0; i < 9; i++)
	C = 'a';

	{
	while (C < 123)
	{
		_putchar(C);
		C++;
	}
	_putchar('\n');
	}
}
