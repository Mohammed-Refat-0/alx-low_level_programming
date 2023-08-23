#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 * Return: 0, 1 0r -1
 */
int _strcmp(char *s1, char *s2)
{
	int length = 0;

	while (s1[length] != '\0' && s2[length] != '\0')
	{
		if (s1[length] == s2[length])
		{
		}
		else if (s1[length] > s2[length])
		{
			return (s1[length] - s2[length];
		}
		else
		{
			return (s1[length] - s2[length]);
		}
		length++;
	}
	return (0);
}
