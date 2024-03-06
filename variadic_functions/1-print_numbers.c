#include "variadic_functions.h"

/**
 *print_numbers - print numbers
 *@separator: entry char separator
 *@n entry n°of argument
 */

void print_numbers(const char *sep, const unsigned int n, ...)
{
	unsigned int c = n;
	int num;

	va_list l;

	va_start(l, n);

	for (c = 0; c < n; c++)
	{
		if (sep != NULL)
		{
			num = va_arg(l, int);
			if (c == n - 1)
				printf("%d", num);
			else
				printf("%d%s", num, sep);
		}
	}
	printf("\n");
}
