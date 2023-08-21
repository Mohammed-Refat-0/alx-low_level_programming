#include "main.h"
/**
 * int _strlen - return length of string
 * @s: string to evalute
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s)
	{
		length++;
		*s++;
	}
}
