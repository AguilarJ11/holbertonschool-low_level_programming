#include "lists.h"
#include <stdio.h>
/**
 *dlistint_len - count all nodes in a double linked list
 *@h: entry pointer to first node
 *Return: n°of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t cont;

	for (cont = 0; h; cont++)
	{
		h = h->next;
	}

	return (cont);

}
