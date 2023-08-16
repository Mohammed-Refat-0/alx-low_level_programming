#include "main.h"
/**
*print_alphabet - function that print alphabet
*it prints in lowercase 10 times
*Return: void
*/
void print_alphabet(void)
{
	char C = 'a';
	int i;

	for (i = 0; i < 9; i++)
	{
	while (C < 123)
	{
		_putchar(C);
		C++;
	}
	_putchar('\n');
	}
}
