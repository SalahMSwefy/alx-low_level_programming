#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *alloc_grid - a function that returns a pointer to
 *a 2 dimensional array of integers.
 *@width: the width of grid
 *@height: the height of grid
 *Return: return pointer to array of chars or null
 */

int **alloc_grid(int width, int height)
{
	unsigned int i, j;
	char **arr;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(sizeof(int) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
