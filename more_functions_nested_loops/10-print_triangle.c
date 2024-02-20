#include "main.h"

/**
 *print_triangle - description
 *@n: description
 */

void print_triangle(int n)
{
	int t, s;

	for (t = 0; n > t; t++)
	{
		for (s = 0; n > s - t; s++)
		{
			_putchar(' ');
		}
		for (; n > s;)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}

