#include "lists.h"
/**
 * print_dlistint - function that prints all the elements in a doubly list.
 * @h: head pointer of linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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

	while (h->next != NULL)
	{
		printf("%i\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
