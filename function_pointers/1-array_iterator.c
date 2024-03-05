#include "function_pointers.h"

/**
 *array_iterator - function that execute a function to print an array of int
 *@array: entry int array
 *@size: entry size_t (typedef of unsigned long int)
 *@action: function that print an int
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	for (c = 0; c < size; c++)
		action(array[c]);

}
