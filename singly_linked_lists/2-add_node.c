#include "lists.h"
#include <string.h>
/**
 *add_node - add a new node in a linked list
 *@head: entry pointer of a pointer to the head
 *@str: entry str
 *Return: new node
 */

list_t *add_node(list_t **head, const char *str)
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
	new->next = *head;
	*head = new;

	return (new);

}
