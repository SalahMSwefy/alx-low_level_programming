#include "main.h"

/**
 **_strcat -a function that concatenates two strings.
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

	return (dest);
}
