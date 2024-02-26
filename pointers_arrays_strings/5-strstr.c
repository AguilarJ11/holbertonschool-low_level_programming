#include "main.h"

/**
 *_strstr - locates a subsring
 *@haystack: entry string
 *@needle: entry substring
 *Return: beginning of substring if is located
 */

char *_strstr(char *haystack, char *needle)
{
	int c1, c2 = 0;

	for (c1 = 0; haystack[c1] != '\0'; c1++)
	{
		for (c2 = 0; needle[c2] != '\0' && haystack[c1 + c2] == needle[c2]; c2++)
			;

		if (needle[c2] == '\0')
			return (haystack + c1);

	}

	return ('\0');

}

