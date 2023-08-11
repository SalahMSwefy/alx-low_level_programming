#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *array_range - a function that creates an array of integers.
 *@min: the minimum value
 *@max: the maximum value
 *Return: pointer to array or null
 */

int *array_range(int min, int max)
{
	unsigned int i, len;
	char *arr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc(len * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
