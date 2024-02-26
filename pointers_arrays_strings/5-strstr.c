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
		if (haystack[c1] == needle[c2])
		{
			c2++;
			if (c2 == '\0')
				break;
		}
	}

	return (haystack - c2 - 1); 


}

