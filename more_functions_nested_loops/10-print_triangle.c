#include "main.h"

/**
 *print_triangle - description
 *@n: description
 */

void print_triangle(int n)
{
	int t, s;

	for (t = 1; n >= t; t++)
	{
		for (s = 2; n >= s ; s++)
		{
			_putchar(' ');
		}
		for (; n <= t;)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}

