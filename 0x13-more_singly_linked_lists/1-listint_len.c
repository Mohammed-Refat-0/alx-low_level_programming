#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function that retuen the numbers of elements of a list_t list.
 * @h: head pointer of linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
