#include "lists.h"

/**
 *free_dlistint - free a node
 *@head: entry pointer of a node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *dir;

	while (head)
	{
		dir = head->next;
		free(head);
		head = dir;
	}
}
