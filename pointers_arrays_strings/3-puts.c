#include "main.h"

/**
 *_puts - stdout a string and a new line
 *@str: entry string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}

	_putchar('\n');
}
