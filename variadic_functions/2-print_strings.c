#include "variadic_functions.h"

/**
 *print_strings - print strings
 *@sep: entry char separator
 *@n: entry n°of argument
 */

void print_strings(const char *sep, const unsigned int n, ...)
{
	unsigned int c = n;
	char *str;

	va_list l;

	va_start(l, n);

	for (c = 0; c < n; c++)
	{
		str = va_arg(l, char*);
		if (sep)
		{
			if (!str)
				printf("(nil)");
			else if (c == n - 1)
				printf("%s", str);
			else
				printf("%s%s", str, sep);
		}
		else
			printf("%s", str);
	}
	printf("\n");
}
