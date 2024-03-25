#include "lists.h"

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
