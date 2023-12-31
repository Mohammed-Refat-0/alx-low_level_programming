#include "main.h"
#include <stdlib.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: decimal number
 * @index: given index to set t 1
 * Return: 1 if sucess, -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > sizeof(*n) * 8)
	{
		return (-1);
	}
	set = 1 << index;
	*n = *n | set;
	return (1);
}
