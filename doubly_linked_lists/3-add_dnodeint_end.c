#include "lists.h"
#include <string.h>

/**
*add_dnodeint_end - add a new node in the end of double linked list
*@head: entry pointer of a pointer to the head
*@n: entry int
*Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *prev_n;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (!*head)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		prev_n = *head;
		(*head)->next = new;

		while (prev_n->next)
		{
			prev_n = prev_n->next;
		}

		new->next = NULL;
		new->prev = prev_n;
		*head = new;
	}

	return (new);
}
