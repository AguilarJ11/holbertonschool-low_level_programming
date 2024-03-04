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
	int *p, cmin, cmax;

	if (min > max)
		return (NULL);

	p = malloc(max * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (cmin = 0; cmin <= min;cmin++)
		p[cmin] = cmin;
	for (cmax = cmin; cmax <= max; cmax++)
		p[cmax] = cmax;

	return (p);
}
