#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - description
*
*Return: description
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d", n,"is positive\n");
	}
	if (n > 0)
	{
		printf("%d" n,"is negative\n");
	}
	if (n = 0)
	{
		printf("%d" n,"is zero\n");
	}

	return (0);
}
