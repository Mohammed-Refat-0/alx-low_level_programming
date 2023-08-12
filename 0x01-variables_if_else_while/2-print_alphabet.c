#include <stdio.h>
/**
 * main - prints alphabets in small letters
 * Return: 0
 */
int main(void)
{
	char C = 'a';

	while (C < 123)
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
