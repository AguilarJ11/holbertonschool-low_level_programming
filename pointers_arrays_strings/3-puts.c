#include "main.h"

/**
 *
 *
 */

void _puts(char *str)
{
	int a;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}

	_putchar('\n');
}
