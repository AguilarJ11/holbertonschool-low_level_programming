#include "lists.h"
#include <stdio.h>
/**
 *print_list - print all nodes in a linked list
 *@h: entry pointer to first node
 *Return: n°of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cont;

	for (cont = 0; h; cont++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (cont);

}
