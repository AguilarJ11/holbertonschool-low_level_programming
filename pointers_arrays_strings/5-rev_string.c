#include "main.h"

/**
 * rev_string - reverse a string
 * @str: entry string
 */

void rev_string(char *str)
{
	int a = 9;

	while (a >= 0)
	{
		_putchar(str[a]);
		a--;
	}
	_putchar('\n');
}

