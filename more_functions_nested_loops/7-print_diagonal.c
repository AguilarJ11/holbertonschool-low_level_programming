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
		_putchar(92);

		for (s = 0; n > s; s++)
		{
			_putchar(' ');
		}
	}

	_putchar('\n');

}

