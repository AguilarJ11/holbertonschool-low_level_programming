#include "main.h"

/**
 *time_table - description
 */

void times_table(void)
{
	int n, r, t;

	for (t = 0; t < 10; t++)
	{
		for (n = 0; n < 10; n++)
		{
			r = n * t;
			if (r < 10)
			{
				_putchar(r + 48);
			}
			else
			{
				_putchar(r / 10 + 48);
				_putchar(r % 10 + 48);
			}
			if (n != 9 && r < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (n != 9 && r > 10)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
