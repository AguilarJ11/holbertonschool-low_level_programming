#include "main.h"

/**
 *_strcat - concatenate a string with another string
 *@dest: entry destination string
 *@src: string for concatenate
 *Return: the 2 strings concatenate
 */

char *_strcat(char *dest, char *src)
{
	int ca1, ca2, cfin;

	for (ca1 = 0; src[ca1] != '\0'; ca1++)
		;
	for (ca2 = 0; dest[ca2] != '\0'; ca2++)
		;

	for (cfin = 0; cfin <= ca1; cfin++)
	{
		dest[ca2 + cfin] = src[cfin];
	}

	return (dest);
}
