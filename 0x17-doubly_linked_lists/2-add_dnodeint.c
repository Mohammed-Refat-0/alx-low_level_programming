#include "lists.h"
/**
 * add_dnodeint - function that add a node at the beg. of list
 * @h: head pointer of linked list
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newnode;

    newnode = malloc(sizeof(dlistint_t));
    if (!newnode)
    {
        return NULL;
    } 
    newnode->n = n;

	if (!(*head))
	{
		newnode->next = NULL;
        newnode->prev = NULL;
        (*head) = newnode;
        return (newnode); 
	}
        (*head)->prev = newnode;
        newnode->next = (*head);
        newnode->prev = NULL;
        (*head) = newnode;
        return (newnode);
}
