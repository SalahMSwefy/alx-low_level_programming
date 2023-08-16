#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - a function that executes a function given as
 *a parameter on each element of an array.
 *@array: array of integers
 *@size: the size of the array
 *@action: a pointer to function
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	int i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
