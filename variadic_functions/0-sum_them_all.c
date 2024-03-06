#include "variadic_functions.h"

/**
 *sum_tem_all - sum all parameters
 *@n: unsigned int
 *Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	int b = 0;
	unsigned int  a;

	va_start(l , n);

	for (a = 0 ; a < n ; a++)
	{
		b += va_arg(l, int);
	}

	va_end(l);

	return (b);

}
