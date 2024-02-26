#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: entry string
 *@accept: entry substring
 *Return: numbero of bytes in the initial segment of string
 */

unsigned int _strspn(char *s, char *accept)
{
	int c1, c2, check2, check = 1;
	unsigned int t = 0;


	for (c1 = 0; s[c1] != '\0'; c1++)
	{
		check2 = 0;
		for (c2 = 0; accept[c2] != '\0'; c2++)
		{
			if (s[c1] == accept[c2] && check == 1)
			{
				t++;
				check2 = 1;
			}

		}

		if (check2 == 0)
			check = 0;

	}

	return (t);
}
