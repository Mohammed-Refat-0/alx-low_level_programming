#include "lists.h"
/**
 * *get_dnodeint_at_index - function that returns nth node
 * @head: pointer to head pointer of linked list
 * @index: index of node to return
 * Return: node pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}
	while (head->prev != NULL)
	{
		head = head->prev;
	}
	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
