#include "main.h"
#include <stdio.h>

/**
 *_strstr- ocates a substring.
 * @haystack: ptr to string to search in
 * @needle:string to locate first occurance
 * Return:  pointer to the memory area of located string or null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int c = 0;
	int length = 0;

	while (needle[length] != 0)
	{
		length++;
	}

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				c++;
			}
			else
			{
				if (c > 0)
				{
					c--;
				}
			}
			if (length == c)
			{
				return (&(haystack[j]) - c);
			}
		}
	}
	return (NULL);
}
