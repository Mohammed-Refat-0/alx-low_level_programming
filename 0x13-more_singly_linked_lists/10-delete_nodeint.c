#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes  a node at the a given index
 * of a list_t list.
 * @head: pointer to head pointer of linked list
 * @index: index of new node
 * Return: 1 id success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *prev;
	unsigned int i = 0;

	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	prev = *head;
	while (temp)
	{
		if (i == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		i++;
		prev = temp;
		temp = temp->next;
	}
	return (-1);
}
