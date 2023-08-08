#include "main.h"
#include <stdlib.h>

/**
 *create_array - a function that creates an array of chars,
 *and initializes it with a specific char.
 *@size: the size of the array
 *@c: character to initializes it
 *Return: return pointer to array of chars or null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
