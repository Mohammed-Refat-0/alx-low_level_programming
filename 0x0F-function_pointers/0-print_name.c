#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - a function that prints a name
 * @name:pointer to the string to print
 * @f:pointer to the function that prints thw string
 * to allow for different peint cases using differnt fn ptrs
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
