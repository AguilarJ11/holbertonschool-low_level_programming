#include "main.h"

/**
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cs1, csf;

	for (cs1 = 0; src[cs1] != '\0'; cs1++)
		;
	for (csf = 0; csf < n; csf++)
	{
		if (csf <= cs1)
			dest[csf] = src[csf];

		else if (csf > cs1)
			dest[csf] = '\0';
	}

	return (dest);
}

