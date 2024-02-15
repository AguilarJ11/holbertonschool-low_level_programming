#include <stdlib.h>
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
		printf(n"is positive\n");
	}
	if (n > 0)
	{
		printf(n"is negative\n");
	}
	if (n = 0)
	{
		printf(n"is zero\n");
	}

	return (0);
}
