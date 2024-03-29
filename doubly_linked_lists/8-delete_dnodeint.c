#include "lists.h"

/**
 *delete_dnodeint_at_index - deleta a node at especific position
 *@head: entry pointer to the head node
 *@index: entry index desire position
 *Return: 1 success -1 fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int cont;
	dlistint_t *aux;

	aux = *head;

	if (index == 0 && !aux)
		return (-1);
	else if (!aux->next && !aux->prev)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	else if (index == 0 && aux)
	{
		aux->next->prev = NULL;
		*head = aux->next;
		free(aux);
		return (1);
	}

	for (cont = 0; cont < index && aux; cont++)
	{
		if (!aux)
			return (-1);

		aux = aux->next;
	}

	aux->prev->next = aux->next;
	aux->next->prev = aux->prev;
	free(aux);

	return (1);

}
