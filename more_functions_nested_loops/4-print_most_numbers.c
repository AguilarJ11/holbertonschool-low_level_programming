#include "main.h"

/**
 *
 */

void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a == 2 || a == 4)
		{
			a++;
		}
		else
		{
			_putchar(a + 48);
			a++;
		}
	}

	_putchar('\n');
}

