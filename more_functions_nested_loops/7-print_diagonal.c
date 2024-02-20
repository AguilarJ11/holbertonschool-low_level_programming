#include "main.h"

/**
 *print_diagonal - description
 *@n: description
 */

void print_diagonal(int n)
{
	int t, s;

	for (t = 0; n > t; t++)
	{
		s = t;

		while (s > 0)
		{
			_putchar(' ');
			s--;
		}

		_putchar(92);
		_putchar('\n');
	}

	if (n <= 0)
	_putchar('\n');

}

