#include <ctype.h>
#include "main.h"

/**
 *_islower - description
 *@c: description
 *Return: description
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
