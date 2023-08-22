#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src to buffer pointed by dest
 * @dest: destination
 * @src: source
 * Return: char ptr dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (*src != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
