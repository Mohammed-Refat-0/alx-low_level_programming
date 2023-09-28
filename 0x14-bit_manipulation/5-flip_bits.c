#include "main.h"
/**
*flip_bits - gets the number of bits to flip to get from number n to number  m
*@n:  number
*@m:  number
*Return: the counts of flipped bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	int count = 0;
	unsigned long int j = (sizeof(unsigned long int) * 8);

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
		{
			count++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
