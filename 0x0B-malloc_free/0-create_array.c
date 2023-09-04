#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes it with a char.
 * @size: size of array
 * @c: char to be intailized with
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *) malloc((size * sizeof(char)));

	if (size == 0)
	{
		return (NULL);
	}
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	ptr[size] = '\0';
	return (ptr);
}
