#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 *main - sum numbers in a string
 *@argc: n°of arg
 *@argv: string of strings
 *return: 1 if error 0 success
 */

int main(int argc, char *argv[])
{
	int c1, c2, isdig, sum;

	for (c1 = 1; c1 < argc; c1++)
	{
		for (c2 = 0; argv[c1][c2] != '\0'; c2++)
		{
			isdig = isdigit(argv[c1][c2]);
			if (isdig == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[c1]);
	}
	printf("%d\n", sum);
	return (0);
}

