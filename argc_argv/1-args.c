#include "stdio.h"

/**
 *main - print the nÂ°of arguments
 *@argc: nÂ of arguments
 *@argv: array of arguments
 *Return: end
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
