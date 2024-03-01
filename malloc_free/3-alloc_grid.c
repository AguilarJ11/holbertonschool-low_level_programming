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
	int *2_dim_array;

	if (width <= 0) || (height <= 0)
		return (NULL);

	2_dim_array = malloc(height * sizeof(int));

	if (2_dim_array == 0)
		return(NULL);

	for (c1 = 0; c1 < height; c1++)
	{
		2_dim_array [c1] = malloc(width * sizeof(int));

		if (2_dim_array[c1] == 0)
		{
			free(2_dim_array);
			return (NULL);
		}

		for (c2 = 0; c2 < width; c2++)
			2_dim_array[c1][c2] == 0;
	}
	return (2_dim_array);
}


