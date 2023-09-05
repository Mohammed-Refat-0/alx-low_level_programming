#include <stdlib.h>
#include "main.h"
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **ptr;
	int i, j;
	int words = 0;
	int c = 0;

	if (!str || *str == ' '  || *str == '')
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			words++;
		}
	}
	words++;
	ptr = (char **) malloc((words + 1) * sizeof(char *));
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32)
		{
			ptr[i] = (char *) malloc((c + 1) * sizeof(char));
			if (!ptr[i])
			{
				return (NULL);
			}
			c = 0;
		}
		c++;
	}
	ptr[words] = NULL;

	for (i = 0; ptr[i] != NULL; i++)
	{
		for (j = 0; str[j] != ' '; j++)
		{
			ptr[i][j] = str[j];
		}
		ptr[i][j] = '\0';
		j++;
	}
	return (ptr);
}
