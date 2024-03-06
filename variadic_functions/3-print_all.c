#include "variadic_functions.h"

/**
 *
 *
 *
 */

void print_all(const char * const format, ...)
{
	va_list l;
	char c, *cp;
	int ent, cont = 0, cont2 = 0;
	float f;

	var_t variable[] = {
	{"i", "int"},
	{"c", "char"},
	{"f", "float"},
	{"s", "char*"},
	{NULL, NULL}
	};

	while (format[cont] != '\0')
	{
		va_start(l, format);

		while (variable[cont2].tipo != NULL)
		{
			if (variable[cont2].tipo == format[cont])
			{

			}

			cont2++;
		}
		cont++;
	}

}
