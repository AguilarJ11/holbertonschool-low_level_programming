#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicate a string and alocate in memoriy
 *@str: entry pointer to string to duplicate
 *Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *p_array;
	int c1, c2;

	if (str == 0)
		return (NULL);

	for (c1 = 0; str[c1] != '\0'; c1++)
		;

	p_array = malloc(c1);

	if (p_array == 0)
		return (NULL);

	for (c2 = 0; c2 < c1; c2++)
		p_array[c2] = str[c2];

	return (p_array);
}
