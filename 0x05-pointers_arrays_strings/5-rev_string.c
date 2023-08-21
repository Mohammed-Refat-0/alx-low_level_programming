#include "main.h"
/**
 *rev_string - reverse a string 
 * @s: string
 *Return:void
 */
void rev_string(char *s);
{
	int c = 0;
	int i =0;

	while (*s != '\0')
	{
									c++;							     s++;
	}
       char arr [c];

       for (i = 0; i < c; i++)
       {
	       s--;
	      arr[i] = *s;
       }
       *s = arr;
       _putchar('\n');
}
