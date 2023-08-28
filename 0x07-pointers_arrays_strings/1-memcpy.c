#include "main.h"
/**
 * _memcpy -  copies memory area
 * @n:number of bytes to be copied
 * @src: ptr to memory to copy
 * @dest: destination ptr to memory to be copied into
 * Return: char ptr
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
