#include "main.h"
/**
*_islower - checks if a char is lower case
*Return: 1 if lowercase, otherwise 0
* c - input char
*/
int _islower(int c)
{
	int k = (int)c;
	int i;

	for (i = 97; i < 123; i++)
	{
		if (k == i)
		{
			return (1);
		}
		else
		{
		}
	}
	return (0);
}
