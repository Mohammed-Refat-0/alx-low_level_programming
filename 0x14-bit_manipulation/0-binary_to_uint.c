#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - convert binary number to int
 * @b: string containing 1 and 0 of binary number
 * Return: int number if success, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i;
	int len = 0;

	if (!b)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		len++;
	}
	for (i = 0; i < len; i++)
	{
		number = number << 1;
		number += b[i] - '0';
	}
	return (number);
}
