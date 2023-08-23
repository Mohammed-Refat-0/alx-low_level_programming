#include "main.h"
/**
 * string_toupper - change lowercase letters to uppercase
 * @ptr: pointer
 * Return: string
 */
char *string_toupper(char *ptr)
{

	int length = 0;

	while (ptr[length] != '\0')
	{
		if  (ptr[length] >= 97 && ptr[length] <= 122)
		{
			ptr[length] = ptr[length] - 32;
		}
		length++;
	}
	return (ptr);
}
