#include "main.h"

/**
 *cap_string - capitalizes all words in a string
 *@str: entry string
 *Return: string with all words capitalize
 */

char *cap_string(char *str)
{
	int cstr, c, mayus = 0;

	for (cstr = 0; str[cstr] != '\0'; cstr++)
	       ;

	for (c = 0; c <= cstr; c++)
	{
		if (str[c] >= 97 && str[c] <= 122 && mayus == 0)
		{
			str[c] = str[c] - 32;
			mayus = 1;
		}

		if ((str[c] >= 65 && str[c] <= 90) || (str[c] >= 48 && str[c] <= 57))
		       mayus = 1;

		if ((str[c] >= 32 && str[c] <= 47) || (str[c] >= 58 && str[c] <= 64) || str[c] == 123 || str[c] == 125)
			mayus = 0;
	}
	return (str);
}

