#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: entry string 1
 *@s2: entry string 2
 *Return: description 
 */

int _strcmp(char *s1, char *s2)
{
	int cs1, c;

	for (cs1 = 0; s1[cs1] != '\0'; cs1++)
		;
	for (c = 0; c < cs1; c++)
	{
		if (s1[c] > s2[c])
			return (1);
		else if (s1[c] < s2[c])
			return (-1);
		else
			return (0);
	}
}

