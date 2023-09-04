#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings.
 * @s1: string to concarenate
 * @s2: string to concatenate
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	int j;
	int length1 = 0;
	int length2 = 0;
	char *ptr;

	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	ptr = (char *) malloc((length1 + length2 + 1) * sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	for (j = 0; j < length1; j++)
	{
		ptr[j] = s1[j];
	}
	for (j = 0; j < length2; j++)
	{
		ptr[length1 + j] = s2[j];
	}
	ptr[length1 + length2 + 1] = '\0';
	return (ptr);
}
