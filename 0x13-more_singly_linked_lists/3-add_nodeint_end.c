#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - function that add a new node at the end of a list_t list.
 * @head: pointer to head pointer of linked list
 * @n: value of new node
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
	temp = *head;
	newnode->n = n;
	newnode->next = NULL;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	return (newnode);
}
