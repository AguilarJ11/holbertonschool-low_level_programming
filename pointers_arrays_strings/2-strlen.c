#include "main.h"

/**
 *_strlen - return the lenght of a string
 *@s: entry
 *Return: lenght
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

	return (a);
}
