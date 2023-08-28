#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - searches a string for any of a set of bytes.
 * @s: ptr to string to search in
 * @accept: chars in string to locate first occurance
 * Return: pointer to the memory area of located char or null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *ptr;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				ptr = &s[j];
				return (ptr);
			}
		}
	}
	ptr = NULL;
	return (ptr);
}
