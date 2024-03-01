#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *alloc_grid - create a 2 dimension array fill with 0
 *@width: entry width
 *@height: entry height
 *Return: 2 dim array fill with 0
 */

int **alloc_grid(int width, int height)
{
	int c1, c2, c3;
	int **two_dim_array;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	two_dim_array = malloc(height * sizeof(int *));

	if (two_dim_array == NULL)
		return (NULL);

	for (c1 = 0; c1 < height; c1++)
	{
		two_dim_array[c1] = malloc(width * sizeof(int));

		if (two_dim_array[c1] == NULL)
		{
			for (c3 = c1 - 1; c3 >= 0; c3--)
				free(two_dim_array[c3]);

			free(two_dim_array);
			return (NULL);
		}

		for (c2 = 0; c2 < width; c2++)
		{

			two_dim_array[c1][c2] = 0;
		}
	}
	return (two_dim_array);
}


