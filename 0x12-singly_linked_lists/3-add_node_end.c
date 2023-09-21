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
	list_t *newnode = malloc(sizeof(list_t));
	list_t **ptr = head;

	if (!newnode)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	while ((*ptr) != NULL)
	{
		(*ptr) = (*ptr)->next;
	}
	newnode->str = strdup(str);
	newnode->next = NULL;
	(*ptr)->next = newnode;
	newnode->len = length;
	return (newnode);
}
