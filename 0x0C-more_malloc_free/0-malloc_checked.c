#include "main.h"
#include <stdlib.h>

/**
 *create_array -a function that allocates memory using malloc.
 *@b: the size of the allocated memory
 *Return: return pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
		return (98);
	return (arr);
}
