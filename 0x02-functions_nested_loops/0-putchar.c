#include <stdio.h>
#include <main.h>
/**
 * main - entry point
 * prints- function that prints "_putchar"
 * Return: 0
 */

int main(void) 
{
	char input [8] = {"_","p","u","t","c","h","a","r"};
	for (int i = 0; i<= 8; i++)
	{
		_putchar(input[i]);
	}
	_putchar('/n');
	Return (0);
}
