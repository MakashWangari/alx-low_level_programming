#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array of integers.
 * @width: columns
 * @height: rows
 *
 * Return:  pointer to the array.
 */
int **alloc_grid(int width, int height)
{
	int row, column, i = 0;
	int **s;

	if ((width  <= 0)  || (height <= 0))
	{
		return (NULL);
	}
	s = (int **)malloc(height * sizeof(int *));
	if (s == NULL)
	{
		return (NULL);
	}
	for (row = 0; row < height; row++)
	{
		s[row] = (int *)malloc(sizeof(int) * width);
		if (s[row] == NULL)
		{
			for (i = 0; i < row; i++)
			{
				free(s[i]);
			}
			free(s);
			return (NULL);
		}
		for (column = 0; column < width; column++)
		{
			s[row][column] = 0;
		}
	}
	return (s);
}
