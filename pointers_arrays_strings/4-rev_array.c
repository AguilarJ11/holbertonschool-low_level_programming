#include "main.h"

/**
 *reverse_array - reverse an array of ints
 *@a: entry array
 *@n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int c, half, tmp;

	if (n % 2 == 0)
		half = n / 2;
	else
		half = (n - 1) / 2;

	for (c = 0; c < half; c++)
	{
		tmp = a[c];
		a[c] = a[n - 1 - c];
		a[n - 1 - c] = tmp
	}
}

