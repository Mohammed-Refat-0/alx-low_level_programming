#include "main.h"
/**
*print_alphabet_x10 - function that print alphabet
*it prints in lowercase 10 times
*Return: void
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	char C = 'a';

	while (C < 123)
	{
		_putchar(C);
		C++;
	}
	_putchar('\n');
	}
}
