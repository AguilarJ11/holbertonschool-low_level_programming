#include "lists.h"

/**
 *free_list - free the linked list
 *@head: entry struct to free
 */

void free_list(list_t *head)
{
	list_t *dir;

	while (head)
	{
		dir = head->next;
		free(head->str);
		free(head);
		head = dir;
	}
}




