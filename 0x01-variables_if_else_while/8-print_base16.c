#include <stdio.h>
/**
 * main - prints hexadecmial numbers.
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);
	}
	while (c < 103)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
