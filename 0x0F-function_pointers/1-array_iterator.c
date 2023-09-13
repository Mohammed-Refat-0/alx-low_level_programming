#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -  function that executes a function given as a parameter
 * on each element of an array.
 * @array: array
 * @size: size of the data in byte
 * @action: function to perform on elements array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
