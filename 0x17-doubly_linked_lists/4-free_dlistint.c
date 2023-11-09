#include "lists.h"
/**
 * free_dlistint - function that free a doubly list
 * @head: pointer to head pointer of linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!(*head))
	{
		return (NULL);
	}
	temp = (*head);
	while ((*head)->next)
	{
		temp = (*head);
		head = (*head)->next;
		free(temp->next);
		free(temp->prev);
		free(temp);
	}
	return
}
