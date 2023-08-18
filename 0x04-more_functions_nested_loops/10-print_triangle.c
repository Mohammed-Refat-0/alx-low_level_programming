#include "main.h"

/**
 * print_triangle - print triangle
 * return: void
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = size; j > i + 1; j--)
			{
				_putchar(' ');
			}

				for (int k = 0; k <= i; k++)
				{
					_putchar('#');
				}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
