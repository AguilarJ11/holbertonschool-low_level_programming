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
		for (s = 0; n > s; s++)
		{
			if (n < s)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}

