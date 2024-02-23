#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: entry string 1
 *@s2: entry string 2
 *Return: positive if s1 is bigger, negative if is smalle
 */

int _strcmp(char *s1, char *s2)
{
	int cs1, cs2;

	for (cs1 = 0; s1[cs1] != '\0'; cs1++)
		;
	for (cs2 = 0; s2[cs2] != '\0'; cs2++)
		;

	if ((cs1 > cs2) || (cs2 > cs1))
		return (cs1);

	else if ((cs1 < cs2) || (cs2 < cs1))
		return (-cs1);

	else
		return (0);
}

