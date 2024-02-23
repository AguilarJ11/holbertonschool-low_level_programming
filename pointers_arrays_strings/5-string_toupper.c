#include "main.h"

/**
 *string_toupper - switch lowercase for uppercase
 *@str: entry string
 *Return: uppercase string
 */

char *string_toupper(char *str)
{
	int cstr, c;

	for (cstr = 0; str[cstr] != '\0'; cstr++)
		;
	for (c = 0; c <= cstr; c++)
	{
		if (str[c] >= 97 && str[c] <= 122)
			str[c] = str[c] - 32;
	}
	return (str);
}
