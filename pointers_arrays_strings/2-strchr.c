#include "main.h"

/**
 *_strchr - search for a character in a string
 *@s: entry string
 *@c: entry value to search
 *Return: pointer of the first match or pointer a null value if not found
 */

char *_strchr(char *s, char c)
{
	int cnt;

	for (cnt = 0; s[cnt] != '\0'; cnt++)
	{
		if (s[cnt] == c)
			return (&s[cnt]);
	}
	if (c == '\0')
		return (&s[cnt]);

	return ('\0');

}

