#include "lists.h"
#include <stdio.h>
/**
 *
 *
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cont;
	dlistint_t *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (cont = 0; cont < idx && h; cont++)
	{
		if (!(*h)->next)
			return (add_dnodeint_end(h, n));

		*h = (*h)->next;
		
	}

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = (*h)->next;
	new->prev = *h;
	(*h)->next = new;
	*h = (*h)->next;
	(*h)->prev = new;
	*h = new;

	return (new);

}
