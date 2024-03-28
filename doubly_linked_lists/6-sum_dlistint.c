#include "lists.h"

/**
 *sum_dlistint - sum all nodes data values
 *@head: entry pointer of a node
 *Return: all values added
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;

	return (sum);
}
