#include "function_pointers.h"

/**
 *int_index - function that search a int from an array
 *@array: entry pointer array
 *@size: entry int - size of array
 *@cmp: function that search for an specific int
 *Return: index n°of the int with a match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c, r;

	for (c = 0; c < size; c++)
	{
		r = cmp(array[c]);
		if (r > 0)
			return (c);
	}

	return (-1);


}
