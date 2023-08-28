#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a char in string
 * @s: ptr to string to search in
 * @c: char to locate
 * Return: pointer to the memory area of located char or null if char not found
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
	}
	return (NULL);
}
