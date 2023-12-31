#include "main.h"
/**
 *is_palindrome- checks whether a string is palindrome
 * @s: string to check
 * Return: int
 */
int is_palindrome(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (pand(s, i - 1));
	}
	else
	{
		i++;
		return (is_palindrome(s + 1));
	}
}
/**
 * pand - checks the palindrome
 * @s: string
 * @i: iterator
 * Return: intger
 */
int pand(char *s, int i)
{
	char *p = (s + i);

	if (i < 0)
	{
		return (1);
	}
	if (*s != *p)
	{
		return (0);
	}
	return (pand(s + 1, i - 1));
}
