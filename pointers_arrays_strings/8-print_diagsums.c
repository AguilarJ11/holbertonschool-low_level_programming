#include "main.h"
#include <stdio.h>

/**
 *
 *
 */

void print_diagsums(int *a, int size)
{
	int c1, c2;
	int dizq = 0, dder = 0;

	for (c1 = 0; c1 < size; c1++)
	{
		for (c2 = 0; c2 < size; c2++)
		{
			if (c1 == c2)
			{
				dizq = a[c1][c2] + dizq;
				dder = a[c1][size - (c2 + 1)] + dder;
			}
		}
	}
	printf("&d, %d\n", dizq, dder);
}

