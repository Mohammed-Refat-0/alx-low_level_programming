#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @height: number of 1d arrays
 * @width: size of 1d arrays
 * Return: char pointer
 */
int **alloc_grid(int width, int height)
{
	int j, i;
	int **ptr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	ptr = (int **) malloc((height) * sizeof(int*));
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			free(ptr);
			for (j = 0; j <= i; j++)
				free(ptr[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height ; i++)
	{
		for (j = 0; j < width; width++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
