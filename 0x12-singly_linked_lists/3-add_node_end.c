#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end -  function that adds a new node at the end of a list_t list.
 * @head: a pointer to pointer of list
 * @str: string to add to the new node
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *newnode;
	list_t **ptr;

	if (!str)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = NULL;
	newnode->len = length;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	ptr = head;
	while ((*ptr)->next != NULL)
	{
		(*ptr) = (*ptr)->next;
	}
	(*ptr)->next = newnode;
	return (newnode);
}
