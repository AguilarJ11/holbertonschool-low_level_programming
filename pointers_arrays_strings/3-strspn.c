#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: entry string
 *@accept: entry substring
 *Return: numbero of bytes in the initial segment of string
 */

unsigned int _strspn(char *s, char *accept)
{
	int c;
	unsigned int t = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == accept[c])
			t++;
	}

	return (t);

}
