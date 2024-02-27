#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - print
 *@a: entry array
 *@size: entry int
 */

void print_diagsums(int *a, int size)
{
	int c;
	int dizq = 0, dder = 0;

	for (c = 0; c < size; c++)
	{
		dizq += a[c * size + c];
		dder += a[(size - 1) * (c + 1)];
	}
	printf("%d, %d\n", dizq, dder);
}

