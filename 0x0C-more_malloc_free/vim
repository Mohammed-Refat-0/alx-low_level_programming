#include "main.h"
#include <stdlib.h>
/**
 * array_range - create array for values from min to max
 * @min: min value to be included
 * @max: max value to be included
 * Return: integer pointer
 */
int *array_range(int min, int max)
{
	int i;
	int range  = ((max + 1) - min);
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(range * sizeof(int));
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
