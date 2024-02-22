#include "main.h"

/**
 * rev_string - reverse a string
 * @str: entry string
 */

void rev_string(char *str)
{
	int a = 0, b, c = 0;
	char l;

	while (str[a] != '\0')
		a++;

	a--;
	if (a / 2 == 0)
		c = a / 2;
	else
		c = a / 2 + 1;

	for (b = 0; a >= c; b++)
	{
		l = str[b];
		str[b] = str[a];
		str[a] = l;
		a--;
	}

}
