#include "main.h"
/**
 * _strncpy - copy string to another
 * @src:prt to string to be copied
 * @dest: ptr to detination string
 * @n: integer length to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length = 0;
	int i;
	int j = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	if (length < n)
	{
		for (i = 0; i < length; i++)
		{
			dest[i] = src[i];
			j++;
		}
		for (i = j; i < (n - length); i++)
		{
			dest[i] = '\0';
		}
		dest[n + 1] = '\0';
	}
	else
	{
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[n + 1] = '\0';
	}
	return (dest);
}
