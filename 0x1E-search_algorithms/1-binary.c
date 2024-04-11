#include "search_algos.h"
/**
 * recursive_binary - helper function to implement recursive binary search
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value
 */
int recursive_binary(int *array, size_t size, int value)
{
	size_t search_index, i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	printf("Searching in array");

	for (i = 0; i < size; i++)
	{
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	}

	printf("\n");

	if (size % 2 == 0)
	{
		search_index = (size / 2) - 1;
	}
	else
	{
		search_index = (size / 2);
	}

	if (value == array[search_index])
	{
		return ((int)search_index);
	}

	if (value < array[search_index])
		return (recursive_binary(array, search_index, value));

	search_index++;

	return (recursive_binary(array + search_index, size - search_index, value)
			+ search_index);
}

/**
 * binary_search - searches for a value in an array of
 * integers using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: the index of the value in the array, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int index = recursive_binary(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
