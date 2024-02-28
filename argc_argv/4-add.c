#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 *
 *
 */

int main(int argc, char *argv[])
{
	int c1, c2, isdig, sum;

	if (argc == 1)
		printf("0\n");

	for (c1 = 1; c1 < argc; c1++)
	{
		for (c2 = 0; c2 != '\0'; c2++)
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
	printf("%d", sum);
	return (0);
}

