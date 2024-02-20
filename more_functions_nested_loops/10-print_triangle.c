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
		for (s = 0; n > s - t; s++)
		{
			_putchar(' ');
		}
		for (; n <= s + t + 1;)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}

