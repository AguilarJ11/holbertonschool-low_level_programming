#include "main.h"

/**
 *print_last_digit - description
 *@a: description
 *@b: description
 *Return: description
 */

int print_last_digit(int a)
{
	int b = a % 10;
	_putchar(b + '0');
	return (b);
}

