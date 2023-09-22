#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list -  function that frees list_t list.
 * @head: a pointerto the head of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (!head)
	{
		return;
	}
	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
