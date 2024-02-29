#include "main.h"
#include <stdlib.h>

/**
 *create_array - create an array with specific size
 *@size: entre size of array
 *@c: entry char
 *Return: array full with entry char
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int cont;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (cont = 0; cont < size; cont++)
		ptr[cont] = c;

	return (ptr);
}
