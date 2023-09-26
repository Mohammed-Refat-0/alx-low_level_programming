#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - function that frees list_t list.
 * @head: pointer to head of linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
	{
		return;
	}
	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
