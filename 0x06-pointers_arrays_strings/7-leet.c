#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @ptr: pointer
 * Return: string
 */
char *leet(char *ptr)
{

	int length = 0;
	int i;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	while (ptr[length] != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (ptr[length] == a[i])
			{
				ptr[length] = b[i];
			}
		}
		length++;
	}
	return (ptr);
}
