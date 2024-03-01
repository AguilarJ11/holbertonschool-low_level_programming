#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenate two strings y one array
 *@s1: entry string
 *@s2: e|ntry string
 *Return: new array with the content of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *p_array;
	int c1, c2, ct = 0, f;

	for (c1 = 0; s1[c1] != '\0'; c1++)
		;
	for (c2 = 0; s2[c2] != '\0'; c2++)
		;

	ct = c1 + c2;

	p_array = malloc(ct + sizeof(char));

	if (p_array == 0)
		return (NULL);

	for (f = 0; f < ct; f++)
	{
		if (f <= c1 - 1)
			p_array[f] = s1[f];
		if (f <= c2)
			p_array[f + c1] = s2[f];
	}

	return (p_array);
}




