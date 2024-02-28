#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplication 2 arguments
 *@argc: n°of arg
 *@argv: array of strings
 *Return: 1 error 0 end
 */

int main(int argc, char *argv[])
{
	int c, m = 1;

	if (argc != 3) 
	{
		printf("Error\n");
		return (1);
	}

	for (c = 1; c < argc; c++)
		m *= atoi(argv[c]);

	printf("%d\n", m);

	return (0);
}

