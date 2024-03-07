#include "variadic_functions.h"

/**
 *print_all - print all parameters
 *@format: order of parameters
 */

void print_all(const char * const format, ...)
{
	int c1 = 0;
	char *str;
	va_list l;

	va_start(l, format);

	while (format[c1])
	{
		switch (format[c1])
		{
			case 'c':
				printf("%c", va_arg(l, int));
				break;
			case 'i':
				printf("%i", va_arg(l, int));
				break;
			case 'f':
				printf("%f", va_arg(l, double));
				break;
			case 's':
				str = va_arg(l, char*);
				if (!str)
				{
				printf("(nil)");
				break;
				}
				printf("%s", str);
				break;
			default:
				break;
		}
		if ((format[c1 + 1] != '\0') && (format[c1] == 'c' || format[c1] == 'i'
			|| format[c1] == 'f' || format[c1] == 's'))
			printf(", ");
		c1++;
	}
	putchar('\n');
	va_end(l);
}
