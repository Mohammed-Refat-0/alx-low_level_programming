#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - returns a pointer to an array of 0 elements.
 * @nmemb: size of the array.
 * @size: byte size of elements
 * Return: pointer of an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb < 1 || size < 1)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		((char *)ptr)[i] = 0;
	}
	return (ptr);
}
