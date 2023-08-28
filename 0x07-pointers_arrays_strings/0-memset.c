#include "main.h"
/**
 * _memset -  fills memory with a constant byte.
 * @n:number of bytes to be filed
 * @s: ptr to fiest location
 * @b: constant byte
 * Return: char ptr
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		s++
	}
	return (s);
}
