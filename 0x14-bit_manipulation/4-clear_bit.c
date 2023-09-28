#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: decimal number
 * @index: given index to set t 1
 * Return: 1 if sucess, -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	*n = *n & (~(1 << index));
	return (1);
}
