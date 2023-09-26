#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - function that frees list_t list and sets head to null.
 * @head: pointer to head pointer of linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
	{
		return;
	}
	if (!*head)
	{
		head = NULL;
		return;
	}
	temp = *head;
	while (head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
