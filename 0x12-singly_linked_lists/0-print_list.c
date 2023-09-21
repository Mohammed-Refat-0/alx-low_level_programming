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

	if (!h)
	{
		return (1);
	}
	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		c++;
		h = h->next;
	}
	return (c);
}
