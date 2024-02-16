#include <stdio.h>

/**
 * main - descripcion
 * Return: descripcion
 */

int main(void)
{

	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}

	a = 'a';

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
