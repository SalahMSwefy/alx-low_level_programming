#include "main.h"

/**
 **_strncpy -a function that copies the string pointed
 *@dest: is a string
 *@src: is a string
 *@n:This is the number of bytes to copy
 *Return: no return
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
