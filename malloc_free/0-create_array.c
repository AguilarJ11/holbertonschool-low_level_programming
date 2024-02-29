#include "main.h"
#include <stdlib.h>

/**
 *create_array - create an array with specific size
 *@size: entre size of array
 *@c: entry addess of array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int cont;
	if (size == 0)
		return ('\0');

	ptr = malloc(size * sizeof(char));

	for (cont = 0; cont < size; cont++)
		ptr[cont] = c;

	return (ptr);
}
