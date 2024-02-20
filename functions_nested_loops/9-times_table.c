#include "main.h"

/**
 *time_table - description
 */

void times_table(void)
{
	int n, r, t;

	for (t = 0; t < 10; t++)
	{
		_putchar(48);
		_putchar(',');
		for (n = 1; n < 10; n++)
		{
			r = n * t;
			if (r < 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(r + 48);
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(r / 10 + 48);
				_putchar(r % 10 + 48);
				_putchar(',');
			}

		}
		_putchar('\n');
	}
}
