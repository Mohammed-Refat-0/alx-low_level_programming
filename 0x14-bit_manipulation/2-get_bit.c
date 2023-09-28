#include "main.h"
/**
 * get_bit - get value of a bit at a given index
 * @n: decimal number
 * @index: index of bit to get
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 32)
	{
		return (-1);
	}
	i = (n >> index);
	return (i & 1);
}
