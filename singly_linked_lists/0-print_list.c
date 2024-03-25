#include "lists.h"

/**
 *print_list - print all nodes in a linked list
 *@h: entry pointer to first node
 *Return: n°of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cont = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		cont++;

	}

	return (cont);

}
