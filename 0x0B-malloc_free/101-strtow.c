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
	int i;
	int words = 0;

	if (!str || *str == ' '  || *str == '\0')
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i - 1] != ' ')
		{
			words++;
		}
	}
	ptr = (char **) malloc((words + 1) * sizeof(char *));
	if (!ptr)
	{
		return (NULL);
	}
	return (ptr);
}
