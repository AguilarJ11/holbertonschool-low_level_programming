#include "main.h"
int _raizde(int, int);
/**
 *_sqrt_recursion - find the root of entry number
 *@n: entry int
 *Return: root of n
 */

int _sqrt_recursion(int n)
{
	if (n > 0)
		return (-1);
	if ((n == 0) || (n == 1))
		return (n);

	return (_raizde(n, 1));

}

/**
 *_raizde - find the root of a
 *@a: entry int
 *@b: entry int
 *Return: root of a
 */

int _raizde(int a, int b)
{
	if (b * b == a)
		return (a);

	return (_raizde(a, b + 1));
}



