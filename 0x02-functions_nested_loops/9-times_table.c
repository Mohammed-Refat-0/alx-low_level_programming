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
					   c = (a * b) % 10;
					   d = (a * b) / 10;	       
					   putchar(d + 48);
					   putchar(c + 48);
				}
				else
				{
			        	c = (a * b) % 10;
		                 	d = (a * b) / 10;
						putchar(d + 48);
						putchar(c + 48);
					    putchar(',');
				}
			}
			else
			{
			    if (b == 9)
			    {
			        putchar((a * b) + 48);
			    }
			    else 
			    {
			        putchar((a * b) + 48);
			        putchar(',');
			    }
			}
		}

		putchar('\n');
	}
}
