#include "main.h"

/**
 *leet - encript a string
 *@str: entry string
 *Return: encripted string
 */

char *leet(char *str)
{
	char n[] = "4433007711";
	char l[] = "aAeEoOtTlL";
	int c1, c2;

	for (c1 = 0; str[c1] != '\0'; c1++)
	{
		for (c2 = 0; l[c2] != '\0'; c2++)
		{
			if (str[c1] == l[c2])
				str[c1] = n[c2];
		}
	}
	return (str);

}
