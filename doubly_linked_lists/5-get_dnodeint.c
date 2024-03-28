#include "lists.h"

/**
 *get_dnodeint_at_index - get a node of the index
 *@head: entry pointer of a node
 *@index: entry index position
 *Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cont;

	for (cont = 0; cont < index && head; cont++)
		head = head->next;

	if (!head)
	{
		return (NULL);
	}

	return (head);
}
