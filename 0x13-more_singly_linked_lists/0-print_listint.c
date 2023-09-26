#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a list_t list.
 * @h: head pointer of linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
