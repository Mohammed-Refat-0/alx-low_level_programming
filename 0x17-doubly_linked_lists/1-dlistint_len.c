#include "lists.h"
/**
 * dlistint_len - function that returns the number of nodes in a lists
 * @h: head pointer of linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	if (!h)
	{
		return (c);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
