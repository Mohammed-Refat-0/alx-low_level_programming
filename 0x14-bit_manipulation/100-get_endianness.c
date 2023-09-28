#include "main.h"
/**
 * get_endianness - checks whether a cpu arch. is big or little endian
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *e = (char *)&(i);

	if (*e == 1)
	{
		return (1);
	}
	return (0);
}
