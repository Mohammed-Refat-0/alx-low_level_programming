#include "main.h"
/**
*_islower(int c); - checks if a char is lower case
*Return: void
*/
int _islower(int c);
{
	int k = (int)c;
	int i;
	for (i = 97; i < 123; i++)
	{
		if ( k == i)
		{
			return (1);
		}
		else 
		{
		}
	}
	return (0);
}
