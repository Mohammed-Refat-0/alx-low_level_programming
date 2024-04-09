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

	int index;

	if (array == NULL)
	{
		return (-1);
	}

	for (index = 0; index < (int)size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			return (index);
		}
	}

	return (-1);
}
