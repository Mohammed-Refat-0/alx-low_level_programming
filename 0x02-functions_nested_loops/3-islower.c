#include "main.h"
/**
*_islower(int c); - checks if a char is lower case
*Return: void
*/
int _islower(int c);
{
	
	int i;
	for (i = 97; i < 123; i++)
	{
		if ( c == i)
		{
			return 1;
		}
	}
	return (0);
}
