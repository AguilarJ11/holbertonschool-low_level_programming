#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 */

int **alloc_grid(int width, int height)
{
	int c1, c2;
	int **two_dim_array;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	two_dim_array = malloc(height * sizeof(int));

	if (two_dim_array == 0)
		return(NULL);

	for (c1 = 0; c1 < height; c1++)
	{
		two_dim_array[c1] = malloc(width * sizeof(int));

		if (two_dim_array[c1] == 0)
		{
			free(two_dim_array);
			return (NULL);
		}

		for (c2 = 0; c2 < width; c2++)
			two_dim_array[c1][c2] = 0;
	}
	return (two_dim_array);
}


