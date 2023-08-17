include "main.h"
/**
*_isupper - checks if a char is uppercase
*Return: 1 if uppercase, otherwise 0
*@c : input char to be verified
*/
int _isupper(int c)
{
	int i;

	for (i = 65; i < 91; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
		}
	}
	return (0);
}
