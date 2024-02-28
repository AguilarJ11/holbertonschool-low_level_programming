#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 *
 *
 */

int main(int argc, char *argv[])
{
	int c, isdig, sum;

	if (argc == 1)
		printf("0\n");

	for (c = 1; c < argc; c++)
	{
		isdig = isdigit(argv[c]);
		if (isdig == 1)
			sum += atoi(argv[c]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d", sum);
	return (0);
}

