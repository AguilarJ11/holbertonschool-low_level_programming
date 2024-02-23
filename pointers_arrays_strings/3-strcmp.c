#include "main.h"

/**
 *
 *
 *
 */

int _strcmp(char *s1, char *s2)
{
	int cs1, cs2;

	for (cs1 = 0 s1[cs1] != '\0'; cs1++)
		;
	for (cs2 = 0 s2[cs2] != '\0'; cs2++)
		;

	if (cs1 > cs2)
		return (cs1);

	else if (cs1 < cs2)
		return (cs1 * -1)

	else
		return (0);
}

