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
		for (s = 0; n > s; s++)
		{
			_putchar(' ');
		}
		
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	_putchar('\n');

}

