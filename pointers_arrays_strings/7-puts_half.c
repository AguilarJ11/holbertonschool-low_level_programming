#include "main.h"

/**
 *puts_half - stoud half of a string
 *@str: entry string
 */

void puts_half(char *str)
{
	int a, b, c;

	for (a = 0; str[a] != '\0'; a++)
		;

	if (a % 2 != 0)
	{
		b = a / 2;
		for (c = 0; c < b; c++)
			_putchar(str[c + b + 1]);
	}
	else
	{
		b = a / 2;
		for (c = 0; c < b; c++)
			_putchar(str[c + b]);
	}

	_putchar('\n');
}
