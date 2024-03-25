#include "lists.h"

/**
 *
 *
 */

size_t print_list(const list_t *h)
{
	size_t cont;

	for (cont = 0;h != NULL; cont++)
	{
		if (h->str == NULL)
			printf("[0] (Nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (cont);

}
