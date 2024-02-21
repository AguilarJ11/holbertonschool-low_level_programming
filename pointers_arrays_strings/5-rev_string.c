#include "main.h"

/**
 * rev_string - reverse a string
 * @str: entry string
 */

void rev_string(char *str)
{
	int a = 0, b, c;
	char l;

	while (str[a] != '\0')
		a++;

	c = a;

	for (b = 0; b <= c; b++)
	{
		l = str[a];
		str[b] = l;
		a--;
	}
		
}

