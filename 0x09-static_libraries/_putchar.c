#include "main.h"
/**
 * main - entry point
 * prints- function that prints "_putchar"
 * Return: 0
 */
int main(void)
{
	char out[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(out[i]);
	}
	_putchar('\n');
	return (0);
}
