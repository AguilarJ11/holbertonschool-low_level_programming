#include "main.h"
#include <stdlib.h>

/**
 *array_range - create an array of int
 *@min: entry int
 *@max: entry int
 *Return: pointer
 */

int *array_range(int min, int max)
{
	int *p, c;

	if (min > max)
		return (NULL);

	p = malloc(max - min + 1 * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (c = 0; c + min <= max; c++)
		p[c] = min + c;

	return (p);

}
