#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: ptr to string to search in
 * @accept: chars to match
 * Return: int length
 */
unsigned int _strspn(char *s, char *accept)
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
	ptr = NULL;
	return (ptr);
}
