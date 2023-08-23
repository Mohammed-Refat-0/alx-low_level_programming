#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @src:prt to string
 * @dest: ptr to stringg
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
