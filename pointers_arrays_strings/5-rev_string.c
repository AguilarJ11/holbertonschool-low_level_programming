#include "main.h"

/**
 *print_rev - stdout a string in reverse
 *@str: entry string
 */

void print_rev(char *str)
{
	int a = 0;

	while (str[a] != '\0')
		a++;
	
	while (a >= 0)
	{
		_putchar(str[a]);
		a--;
	}
	_putchar('\n');
}
