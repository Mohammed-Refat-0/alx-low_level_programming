#include "lists.h"
#include <stdio.h>
/**
 * list_len - return the number of  elements in a linked list
 * @h: head pointer of linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
