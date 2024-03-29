#include "lists.h"
#include <stdio.h>
/**
 *insert_dnodeint_at_index - insert a node in a especific position
 *@h: entry pointer to a head nodei
 *@idx: entry index position
 *@n: entry data int
 *Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cont;
	dlistint_t *new, *aux;

	if (idx == 0)
		return (add_dnodeint(h, n));

	aux = *h;

	for (cont = 0; cont < idx; cont++)
	{
		if (!aux->next && !aux->prev)
		{
			printf("(nil");
			return (NULL);
		}
		else if (!aux->next)
			return (add_dnodeint_end(h, n));

		aux = aux->next;
	}

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = aux;
	new->prev = aux->prev;
	aux->prev->next = new;
	aux->prev = new;

	return (new);

}
