#include <stdio.h>
/**
 * main - prints alphabets in small lettersi, except q and e.
 * Return: 0
 */
int main(void)
{
	unsigned char C = 'a';

	while (C < 123)
	{
		if (C == 101)
		{
			C++;
		}
		else if (C == 131)
		{
			C++;
		}
		else
		{
			putchar(C);
			C++;
		}
	}
	putchar('\n');
	return (0);
}
