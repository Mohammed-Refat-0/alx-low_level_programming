#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint- function that revers a linked list
 * @head: pointer to head pointer of linked list
 * Return: pointer to head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *prev;

	if (!*head)
	{
		return (NULL);
	}
	if ((*head)->next == NULL)
	{
		return (*head);
	}
	temp = NULL;
	prev = NULL;
	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}

	*head = prev;
	return (*head);
}
