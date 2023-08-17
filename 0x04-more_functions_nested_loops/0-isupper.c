include "main.h"
/**
*_isupper - checks if a char is uppercase
*Return: 1 if uppercase, otherwise 0
*@c : input char to be verified
*/
int _isupper(int c)
{
	int i;
	int k = (int)c;

	for (i = 65; i < 91; i++)
	{
		if (k == i)
		{
			return (1);
		}
	}
	return (0);
}
