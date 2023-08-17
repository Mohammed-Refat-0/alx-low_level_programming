#include "main.h"
/**
*times_table- prints time tables
*
*Return:returns void
*/
void times_table(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a * b) > 9)
			{
				if (b == 9)
				{
					for(d = 0; d < 2; d++)
					{
						c = (a * b) % 10;
					       _putchar(c + 48);
				       		c = (a * b) / 10;	       
					}

				}
				else
				{
					for (d = 0; d < 2; d++)
					{
						c = (a * b) % 10;
						_putchar(c + 48);
						c = (a * b) / 10;
					}
					_putchar(',');
				}
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
