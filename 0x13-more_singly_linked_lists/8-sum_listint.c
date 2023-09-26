#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - function that sums all the elements of nodes of a list_t list.
 * @head: head pointer of linked list
 * Return: sum of n of nodes
 */
int sum_listint(listint_t *head)
{
	int c = 0;

	if (!head)
	{
		return (0);
	}
	while (head != NULL)
	{
		c = c + head->n;
		head = head->next;
	}
	return (c);
}
