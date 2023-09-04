#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid previously created
 * @grid: pointer to arrays
 * @height: number of arrays
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid || height == 0)
	{
		return;
	}
	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
