#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Main
 *@argc: n°argumentos
 *@argv: pointer string array
 *Return: calculo o error
 */

int main(int argc, char *argv[])
{
	int a, b, r;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
		&& argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	r = get_op_func(argv[2])(a, b);

	printf("%d\n", r);
	return (0);
}
