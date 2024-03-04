#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - conect s1 with n char of s2
 *@s1: entry string
 *@s2: entry string
 *@n: entry unsigned int
 *Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c1, c2, fill1, fill2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (c1 = 0; s1[c1] != '\0'; c1++);
	for (c2 = 0; s2[c2] != '\0'; c2++);

	if (n >= c2)
	{
		p = malloc(c1 + c2 - 1);
	}
	else
	{
		p = malloc(c1 + n);
	}

	if (p == NULL)
		return (NULL);

	for (fill1 = 0; fill1 < c1; fill1++)
		p[fill1] = s1[fill1];
	for (fill2 = 0; fill2 <= c2 && fill2 <= n; fill2++)
	       p[fill2 + fill1] = s2[fill2];	

	return (p);
}
