#include "main.h"

/**
 **_strncat -a function that concatenates two strings.
 *it will use at most n bytes from src
 *@dest: is a string
 *@src: is a string
 *Return:return string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	while (src[j] != 0 && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (n > j)
		dest[i] = 0;

	return (dest);
}
