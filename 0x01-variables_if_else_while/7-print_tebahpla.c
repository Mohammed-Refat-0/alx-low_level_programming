#include <stdio.h>
/**
 * main - prints alphabets in small letters in reverse order.
 * Return: 0
 */
int main(void)
{
	char C = 'z';

	while (C > 96)
	{
		putchar(C);
		C--;
	}
	putchar('\n');
	return (0);
}
