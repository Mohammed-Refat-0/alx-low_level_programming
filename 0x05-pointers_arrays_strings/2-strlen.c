#include "main.h"
/**
 * _strlen - return length of string
 * @s: string to evalute
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
