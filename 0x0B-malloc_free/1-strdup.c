#include "main.h"
#include <stdlib.h>

/**
 *_strdup - a function that returns a pointer to a newly allocated space in
 *memory, which contains a copy of the string given as a parameter.
 *@str: the string given as a parameter to copy
 *Return: return pointer to array of chars or null
 */

char *_strdup(char *str)
{
	unsigned int i, size;
	char *arr;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (str[size] != 0)
	{
		size++;
	}

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
