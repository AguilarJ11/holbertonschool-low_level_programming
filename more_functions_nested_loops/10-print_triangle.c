#include "main.h"

/**
 *print_triangle - description
 *@n: description
 */

void print_triangle(int n)
{
	int a, b, c;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n - a - 1; b++)
		{
			_putchar(' ');
		}
		for (c = 0; c < a + 1; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
