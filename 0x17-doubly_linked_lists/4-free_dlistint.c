#include "lists.h"
/**
 * free_dlistint - function that free a doubly list
 * @head: pointer to head pointer of linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!(head))
	{
		return;
	}
	temp = (head);
	while ((head)->next != NULL)
	{
		temp = (head);
		head = (head)->next;
		free(temp);
	}
}
