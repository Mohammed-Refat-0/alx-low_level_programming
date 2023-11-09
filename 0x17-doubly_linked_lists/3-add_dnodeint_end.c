#include "lists.h"
/**
 * *add_dnodeint_end - function that add a node at the end of list
 * @head: pointer to head pointer of linked list
 * @n: value to add
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (!(*head))
	{
		newnode->prev = NULL;
		(*head) = newnode;
		return (newnode);
	}
	temp = (*head);
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;
	return (newnode);
}
