#include "lists.h"
#include <stdio.h>
/**
 *print_dlistint - print all nodes in a double linked list
 *@h: entry pointer to first node
 *Return: n°of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cont;

	for (cont = 0; h; cont++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (cont);

}
