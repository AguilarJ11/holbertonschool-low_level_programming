#include "lists.h"

/**
 *list_len - count the number of nodes in a linked list
 *@h: entry pointer to first node
 *Return: n°of nodes
 */

size_t list_len(const list_t *h)
{
	size_t cont;

	for (cont = 0; h != NULL; cont++)
		h = h->next;

	return (cont);

}
