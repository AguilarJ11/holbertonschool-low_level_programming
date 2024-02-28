#include "stdio.h"

/**
 *main - print all arguments
 *@argc: n°of arg
 *@argv: array list of arg
 *Return: end
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);

	return (0);
}

