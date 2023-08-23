#include "main.h"
/**
 * _strcat - concatenates two strings with n bytes input
 * @src:prt to string
 * @dest: ptr to string
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n);
{
	int length = 0;
	int i;

	while (dest[length] = '\0')
	{
		length++;
	}
	for (i = 0; i < n, i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
