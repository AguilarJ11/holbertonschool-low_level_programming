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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n % 10;

	if (n > 5)
	{
		printf("%d and is greater than 5\n", last);
	}
	if ((n > 6) && (n != 0))
	{
		printf("%d and is less than 6 and not 0\n", last);
	}
	if (n == 0)
	{
		printf("%d is 0\n", last);
	}

	return (0);
}
