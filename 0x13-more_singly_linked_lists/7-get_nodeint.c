#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that get node at a index.
 * @head: pointer to head of linked list
 * @index: position of node to retreive
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}
	temp = head;
	while (temp)
	{
		if (i == index)
		{
			return (temp);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
