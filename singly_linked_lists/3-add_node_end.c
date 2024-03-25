#include "lists.h"
#include <string.h>

/**
*_strlen - count the size of a str
*@s: entry string
*Return: n°of char in entry string
*/

size_t _strlen(const char *s)
{
	size_t cont;

	for (cont = 0; s[cont] != '\0'; cont++)
		;
	return (cont);
}

/**
*add_node_end - add a new node at the end in a linked list
*@head: entry pointer of a pointer to the head
*@str: entry str
*Return: new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(str);
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	else
	{
		while ((*head)->next != NULL)
			head = &(*head)->next;

		(*head)->next = new;
	}

	return (new);
}
