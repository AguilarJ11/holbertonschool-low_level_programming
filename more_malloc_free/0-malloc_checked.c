#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - alocate memory of entry size
 *@b: size of memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;
	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

