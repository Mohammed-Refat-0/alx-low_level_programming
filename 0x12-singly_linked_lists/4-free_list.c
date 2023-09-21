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
	unsigned int c = 0;
	unsigned int i;
	list_t *ptr = head;

	if (!head)
	{
		return;
	}
	while (ptr != NULL)
	{
		ptr = ptr->next;
		c++;
	}
	for (i = c; i > 0; i--)
	{
		free(head->next);
	}
	free(head);
}
