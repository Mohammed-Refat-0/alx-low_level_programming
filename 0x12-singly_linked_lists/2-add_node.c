#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node -  function that adds a new node at the beginning of a list_t list.
 * @head: a pointer to pointer of list
 * @str: string to add to the new node
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *newnode = malloc(sizeof(list_t));

	if (!newnode)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	newnode->str = strdup(str);
	newnode->next = (*head)->next;
	newnode->len = length;
	*head = newnode;
	return (*head);
}
