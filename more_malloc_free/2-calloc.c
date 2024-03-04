#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocate a memory for an array
 *@nmemb: entry unsigned int
 *@size: entry unsigned int
 *Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p, c;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	p = malloc(nmemb * size);

	if (p == 0)
		return (NULL);

	for (c = 0; p[c] != '\0'; c++)
		p[c] = 0;

	return (p);
}

