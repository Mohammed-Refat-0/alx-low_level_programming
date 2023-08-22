#include "main.h"
/**
 *_strcpy - copy content of string to another
 * @dest: destination
 *@src: source
 *Return: char
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
	       *dest = *src;
		dst++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
