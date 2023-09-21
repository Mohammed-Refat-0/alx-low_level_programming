#include "lists.h"
#include <stdio.h>
/**
 * print_list - unction that prints all the elements of a list_t list.
 * @h: head pointer of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int c;
	const list_t *ptr;
	if (!h)
	{
		return (1);
	}
	ptr = h;
	while (ptr != NULL)
	{
		if (!ptr->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", ptr->str);
		}
		c++;
		ptr = ptr->next;
	}
	return (c);
}
