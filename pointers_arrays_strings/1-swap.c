#include "main.h"

/**
 *swap_int - description
 *@a: description
 *@b: description
 */

void swap_int(int *a, int *b)
{

	int c = *b;

	*b = *a;
	*a = c;
}
