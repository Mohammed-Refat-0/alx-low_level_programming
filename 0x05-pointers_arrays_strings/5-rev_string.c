#include "main.h"
/**
 *rev_string - reverse a string
 *@s: string
 *Return:void
 */
void rev_string(char *s)
{
	int i;
	int length = 0;
	int trav = 0;
	char placeholder;

	while (s[length] != '\0')
	{
		length++;
	}

	trav = length - 1;

	for (i = 0; i < (length / 2); i++)
	{
		placeholder = s[i];
		s[i] = s[trav];
		s[trav--] = placeholder;
	}
}
