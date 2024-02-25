#include "main.h"

/**
 *_memset - fill a block of memory with a constant byte
 *@s: entry pointer string
 *@b: entry char to fill the string
 *@n: entry number of byes to fill
 *Return: return pointer to a block of memory modified
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;

	return (s);

}
