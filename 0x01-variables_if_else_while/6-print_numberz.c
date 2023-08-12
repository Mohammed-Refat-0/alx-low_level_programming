#include <stdio.h>
/**
 * main - prints all single digit numbers of base
 * 10, using putchar.
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		n = n + 48;
		putchar(n);
	}
	putchar('\n');
	return (0);
}
