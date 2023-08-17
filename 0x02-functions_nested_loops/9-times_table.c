#include "main.h"
/**
*times_table- prints time tables
*
*Return:returns void
*/
void times_table(void);
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 9)
			{
				_putchar((a * b) + 48);
			}
			else
			{
			_putchar((a * b) + 48);
			_putchar(',');
			}
		}

		_putchar('\n');
	}
}
