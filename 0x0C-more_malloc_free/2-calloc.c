#include "main.h"
#include <stdlib.h>

/**
 *_calloc - a function that allocates memory for an array, using malloc.
 *@nmemb: the size of the array
 *@size: number of byte of each element
 *Return: return pointer to array or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
	}

	return (arr);
}
