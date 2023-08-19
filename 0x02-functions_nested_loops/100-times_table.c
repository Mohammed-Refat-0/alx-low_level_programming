#include "main.h"

/**
 * print_times_table - prints n*n time tables
 * return: void
 * @n: n times of time table
 */
void print_times_table(int n)
{
	int i, j, a, b, c, h;
	if (n < 0 || n > 15)
	{
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if(i * j >= 100)
				{
					h = i * j;
				 	a = h % 10;
					h = h / 10;
					b = h % 10;
					h = h / 10;
					c = h % 10;
					_putchar(c + 48);
					_putchar(b + 48);
					_putchar(a + 48);
					if (j != n)
					{
					_putchar(',');
					_putchar('  ');
					}

				}
				else if ( i * j >= 10)
				{
					h = i * j;
					a = h % 10;
					h = h / 10;
					b = h % 10;
					_putchar(b + 48);
					_putchar(a + 48);
					if (j != n)
					{
					_putchar(',');
					_putchar('  ');
					}
				}
				else 
				{
					h = i * j; 
					_putchar(h + 48);
					if (j != n)
					{
					_putchar(',');
					_putchar('  ');
					}		
				}
			}
			if ( i != n)
			{
				_putchar('\n');
			}
		}

	}
}
