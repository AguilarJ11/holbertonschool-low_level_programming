#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 *print_alphabet - descripcion
 */

void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{

	_putchar(a);
	a++;
	}

	_putchar('\n');
}
