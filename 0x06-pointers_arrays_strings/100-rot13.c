#include "main.h"
/**
 * rot13 - encodes a string in rot13
 * @ptr: ptr to string
 * Return: encoded ptr string
 */
char *rot13(char *ptr)
{
	int i = 0;
	int j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (ptr[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (ptr[i] == a[j])
			{
				ptr[i] = b[j];
				break;
			}
		}

	}

	return (ptr);
}
