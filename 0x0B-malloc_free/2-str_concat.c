#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *str_concat - a function that concatenates two strings.
 *@s1: the frist string
 *@s2: the second string
 *Return: return pointer to array of chars or null
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size1, size2;
	char *arr;

	size1 = size2 = 0;
	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";

	while (s1[size1] != 0)
		size1++;
	while (s2[size2] != 0)
		size2++;

	arr = malloc(sizeof(char) *(size1 + size2 + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		arr[i] = s1[i];
	}

	for (j = 0; j < size2; i++, j++)
	{
		arr[i] = s2[j];
	}

	return (arr);
}
