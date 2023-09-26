#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that add a new node at the a given index
 * of a list_t list.
 * @head: pointer to head pointer of linked list
 * @idx: index of new node
 * @n: value of node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp;
	unsigned int i = 0;

	if (!*head && idx != 0)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
	temp = *head;
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (*head);
	}
	while (temp)
	{
		if (i == idx)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
