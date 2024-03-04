#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int c1,c2;
	char *p;

	if (n >= sizeof(s2))
	{
		p = malloc(sizeof(s1) + sizeof(s2));
	}
	else
	{
		p = malloc(sizeof(s1) + n + 1);
	}

	if (p == NULL)
		return (NULL);

	for (c1 = 0; s1[c1] != '\0'; c++)
		p[c1] = s1[c1];
	for (c2 = 0; s2[c2] != '\0' && c2 <= n; c2++)
		p[c1 + c2] = s2[c2];

	p[c1 + c2] = '\0';

	return (p);
}




