#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: string to concarenate
 * @s2: string to concatenate
 * @n: n bytes to concatenates from string 2
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
	{length1++; }
	while (s2[length2] != '\0')
	{length2++; }
	if (n >= length2)
	{n = length2; }
	ptr = malloc((length1 + n + 1) * sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	for (j = 0; j < length1; j++)
	{
		ptr[j] = s1[j];
	}
	for (j = 0; j < n; j++)
	{
		ptr[length1 + j] = s2[j];
	}
	ptr[length1 + n + 1] = '\0';
	return (ptr);
}
