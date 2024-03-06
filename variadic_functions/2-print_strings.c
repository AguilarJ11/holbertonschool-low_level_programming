#include "variadic_functions.h"

/**
 *print_strings - print strings
 *@sep: entry char separator
 *@n: entry n°of argument
 */

void print_strings(const char *sep, const unsigned int n, ...)
{
	unsigned int c = n;
	char str;

	va_list l;

	va_start(l, n);

	for (c = 0; c < n; c++)
	{
		str = va_arg(l, int);
		if (sep)
		{
			if (c == n - 1)
				printf("%d", str);
			else
				printf("%d%s", str, sep);
		}
		else
			printf("%d", str);
	}
	printf("\n");
}
