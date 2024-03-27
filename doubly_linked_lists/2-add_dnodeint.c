#include "lists.h"
#include <string.h>

/**
*add_dnodeint - add a new node in a double linked list
*@head: entry pointer of a pointer to the head
*@str: entry str
*Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *prev_n;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if(!*head)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		prev_n = *head;
		(*head)->prev = new;
		new->next = prev_n;
		new->prev = NULL;
		*head = new;
	}

	return (new);
}
