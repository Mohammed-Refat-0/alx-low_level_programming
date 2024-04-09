#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *  using Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: the value to search for
 * Return: the index of the value in the array, -1 otherwise
 **/
int linear_search(int *array, size_t size, int value)
{

	size_t index;

	for (index = 0; index < size; index++)
	{
		if (array[index] == value)
		{
			printf("%d/n", array[index]);
			return (index);
		}
		printf("%d/n", array[index]);
	}

	return (-1);
}
