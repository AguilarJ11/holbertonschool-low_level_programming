#include "main.h"

/**
 *_pow_recursion - return value x raised to the power of y
 *@x: entry int
 *@y: entry int
 *@Return: x raised y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
