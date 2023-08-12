#include <stdio.h>
/**
 * main - prints all single digit numbers of base
 * 10, followed by comma and space using putchar.
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
