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
	char *ptr;
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
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ptr = av[i][j];
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}
	*ptr = '\0';
	return (ptr);
}
