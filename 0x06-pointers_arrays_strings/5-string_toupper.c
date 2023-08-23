#include "main.h"

/**
 * string_toupper - change lowercase letters to uppercase
 * @*: pointer
 * Return: ptr to string
 */
char *string_toupper(char *)
{

	int length = 0;

	while (*[length] != '\0')
	{
		if  (*[length] > 90)
		{
			*[length] = *[length] - 32;
		}
		length++;
	}
	return (*);
}
