#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *string_nconcat - a function that concatenates two strings.
 *@s1: the frist string
 *@s2: the second string
 *@n: number of byte from s2 to concatenates
 *Return: return pointer to array of chars or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1, size2;

	size1 = size2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != 0)
		size1++;
	while (s2[size2] != 0)
		size2++;
	if (n >= size2)
		n = size2;

	s1 = realloc(s1, (size1 + n + 1));

	if (s1 == NULL)
		return (NULL);

	for (i = 0, j = size1; i < n; i++, j++)
	{
		s1[j] = s2[i];
	}

	s1[j] = 0;
	return (s1);
}
