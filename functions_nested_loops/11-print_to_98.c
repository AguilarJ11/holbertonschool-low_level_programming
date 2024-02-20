#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - description
 *@n: description
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
