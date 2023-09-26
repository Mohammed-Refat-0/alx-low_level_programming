#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - function that pops the first node of list_t list.
 * @head: pointer to head pointer of linked list
 * Return: deleted n of node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!*head)
	{
		return (0);
	}
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
