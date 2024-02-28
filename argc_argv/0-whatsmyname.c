#include "stdio.h"

/**
 *main - print program name
 *@argc: n°of arguments on my program
 *@argv: array of arguments on my program
 *Return: end
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}

