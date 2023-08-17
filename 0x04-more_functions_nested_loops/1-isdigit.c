#include "main.h"
/**
*_isdigit - checks if a input  is a digit
*Return: 1 if digit, otherwise 0
*@c : input  to be verified
*/
int _isdigit(int c);
{
	int i;

	for (i = 48; i < 58; i++)
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
