#include "main.h"
#include <stdlib.h>

/**
 *array_range - a function that creates an array of integers.
 *@min: the minimum value
 *@max: the maximum value
 *Return: pointer to array or null
 */

int *array_range(int min, int max)
{
	unsigned int i;
	char *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(*arr));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (max - min); i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
