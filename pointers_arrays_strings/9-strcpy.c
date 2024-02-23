#include "main.h"

/**
 *_strcpy - copy a string on another string
 *@dest: copy of string
 *@src: original string
 *Return: copy
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	dest[a] = src[a];

	return (dest);
}
