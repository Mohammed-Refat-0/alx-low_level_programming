#include "lists.h"
/**
 * free_dlistint - function that free a doubly list
 * @head: pointer to head pointer of linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
