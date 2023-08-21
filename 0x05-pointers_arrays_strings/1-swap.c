#include "main.h"
/**
 * swap_int- swap the value of two vars
 * @a: pointer to first value
 * @b: pointer to second value
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
