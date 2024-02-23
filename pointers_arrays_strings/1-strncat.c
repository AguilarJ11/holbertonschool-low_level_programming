#include "main.h"

/**
 *_strncat - concatenate 2 strings but only n bytes from the second string
 *@dest: string destination
 *@src: second string
 *@n: amount of bytes to copy
 *Return: string with the n bytes copied
 */

char *_strncat(char *dest, char *src, int n)
{
	int cs1, cs2, cfin;

	for (cs1 = 0; src[cs1] != 0; cs1++)
		;
	for (cs2 = 0; dest[cs2] != 0; cs2++)
		;
	for (cfin = 0; cfin < n && cfin < cs1; cfin++)
		dest[cs2 + cfin] = src[cfin];

	return (dest);
}
