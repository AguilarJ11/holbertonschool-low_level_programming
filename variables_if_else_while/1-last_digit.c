#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
/**
*main - description
*
*Return: description
*/
int main(void)
{
	int n;
	int last = strlen(n);


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%d and is greater than 5\n", n - 1);
	}
	if ((n > 6) && (n != 0))
	{
		printf("%d and is less than 6 and not 0\n", n - 1);
	}
	if (n == 0)
	{
		printf("%d is 0\n", n - 1);
	}

	return (0);
}
