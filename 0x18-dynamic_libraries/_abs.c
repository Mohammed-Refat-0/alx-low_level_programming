#include "main.h"
/**
*_abs - return abs value of integer
*Return: 0
*@a : value to be returned
*/
int _abs(int a)
{
	if (a > 0 || a == 0)
	{
		return (a);
	}
	else
	{
		a = a - (a * 2);
		return (a);
	}

}
