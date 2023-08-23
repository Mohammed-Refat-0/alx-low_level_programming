#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @ptr: pointer
 * Return: string
 */
char *cap_string(char *ptr)
{
	int length = 0;

	while (ptr[length] != '\0')
	{
		if (ptr[0] >= 97 && ptr[0] <= 122)
		{
			ptr[0] = ptr[0] - 32; 
		}
		if (ptr[length] == 44 || ptr[length] == 59 || ptr[length] == 46 
			|| ptr[length] == 33 || ptr[length] == 63 || ptr[length] == 34 
			|| ptr[length] == 40 || ptr[length] == 41 || ptr[length] == 123 || ptr[length] == 125)
		{
			length++;
			if (ptr[length] >= 97 && ptr[length] <= 122)
			{
				ptr[length] = ptr[length] - 32;
			}
			}
		length++;
	}
	return (ptr);
}
