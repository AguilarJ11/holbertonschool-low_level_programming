#include "main.h"

/**
 *more_numbers - description
 */

void more_numbers(void)
{
	int n, t;

	for (t = 0; t <=10; t++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar(n / 10 + 48);
			}

			_putchar(n % 10 + 48);
		}

		_putchar('\n');
	}
}
		

