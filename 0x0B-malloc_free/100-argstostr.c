#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - function that concatenates all arguments of a program
 * @ac: number of arguments
 * @av: array of strings
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *ptr, *ptr1;
	int length = 0;

	if (ac == 0 || !av)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
		length++;
	}
	ptr = (char *) malloc((length + 1) * sizeof(char));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	ptr1 = ptr;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ptr1 = av[i][j];
			ptr1++;
		}
		*ptr1 = '\n';
		ptr1++;
	}
	*ptr1 = '\0';
	return (ptr);
}
