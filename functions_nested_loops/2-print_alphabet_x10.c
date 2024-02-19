#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 *print_alphabet_x10 - descripcion
 */

void print_alphabet_x10(void)
{
	int a = 'a';
	int b = 0;

	while (b <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		a = 'a';
		_putchar('\n');
		b++;
	}
}
