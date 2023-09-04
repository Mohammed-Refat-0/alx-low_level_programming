#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to copy to the new allocated space
 * Return: char pointer
 */
char *_strdup(char *str)
{
	int j;
	int i = 0;
	char *ptr;

	if (str == NULL)
        {
                return (NULL);
        }
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = (char *) malloc((i + 1) * sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	for (j = 0; j < i ; j++)
	{
		ptr[j] = str[j];
	}
	ptr[i + 1] = '\0';
	return (ptr);
}
