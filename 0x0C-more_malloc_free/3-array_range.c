#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *array_range - a function that creates an array of integers
 *@min: minimum values
 *@max: maximum values
 *Return: returns the pointer to the newly created array
 **/

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = min + i;
		i++;
	}

	return (ptr);
}
