#include "main.h"

/**
 *_strncpy - copy a string
 *@src: entry string
 *@dest: entry string
 *@n: entry int
 *Return: copy
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

