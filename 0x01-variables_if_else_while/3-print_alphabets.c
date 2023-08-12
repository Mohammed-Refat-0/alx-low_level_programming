#include <stdio.h>
/**
 * main - prints alphabets in small and capital letters
 * Return: 0
 */
int main(void)
{
	char C = 'a';
	char c = 'A';

	while (C < 123)
	{
		putchar(C);
		C++;
	}
	while (c < 91)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
