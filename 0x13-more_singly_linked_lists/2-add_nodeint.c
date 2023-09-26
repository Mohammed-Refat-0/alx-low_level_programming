#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - function that add a new node at begining of a list_t list.
 * @head: pointer to head pointer of linked list
 * @n: value of new node
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
