#include "main.h"

/**
 **_strcmp -a function that compares two strings.
 *@s1: is a string
 *@s2: is a string
 *Return:return
 */
char *_strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != 0)
	{
		i++;
	}

	while (s2[j] != 0)
	{
		j++;
	}

	if (i == j)
		return (0);

	return (*s1 - *s2);
}
