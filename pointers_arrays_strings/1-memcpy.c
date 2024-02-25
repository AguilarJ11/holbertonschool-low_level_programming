#include "main.h"

/**
 *_memcpy - cpy a block of memory from another block of memory
 *@src: entry pointer string
 *@dest: entry pointer string to copy
 *@n: entry number of byes to copy
 *Return: return pointer string copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];

	return (dest);

}
