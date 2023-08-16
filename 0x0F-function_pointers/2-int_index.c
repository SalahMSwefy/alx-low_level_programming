#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - a function that searches for an integer.
 *@array: array of integers
 *@size: the size of the array
 *@cmp: a pointer to function
 *Return: nothing
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	unsigned int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (0);
}
