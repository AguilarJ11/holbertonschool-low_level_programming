#include <stdio.h>

/**
 *main - description
 *Return: chau
 */

int main(void)

{
	char a = 'a';

	while (a <= 'z')
	{
	if (a == 'e' || a == 'q')
	{
	a++;
	}
	else
	{
	putchar(a);
	a++;
	}
	}
	putchar('\n');

	return (0);
}
