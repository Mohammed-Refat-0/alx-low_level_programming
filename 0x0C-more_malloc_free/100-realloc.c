#include "main.h"
#include <stdlib.h>
/**
 * _realloc-  function that reallocates a memory block using malloc and free
 * @new_size: new size top allocated
 * @old_size: old allocated size
 * @ptr: pointer
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	unsigned int range  = new_size - old_size;
	void *ptr1;

	if (!ptr)
	{
		ptr1 = malloc(new_size);
		if (!ptr1)
		{
			return (NULL);
		}
		return (ptr1);
	}
	else if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	else if (range == 0)
	{
		return (ptr);
	}
	else
	{
		ptr1 = malloc(new_size);
		if (!ptr1)
		{
			return (NULL);
		}
		for (i = 0; i < min(new_size, old_size); i++)
		{
			((char *)ptr1)[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (ptr1);
	}
}
/**
 * min - return minmunum value
 * @a: integer
 * @b: integer
 * Return: unsigned min
 */
unsigned int min(unsigned int a, unsigned int b)
{
	if (a > b)
	{
		return (b);
	}
	else if (b > a)
	{
		return (a);
	}
	else
	{
		return (a);
	}
}
