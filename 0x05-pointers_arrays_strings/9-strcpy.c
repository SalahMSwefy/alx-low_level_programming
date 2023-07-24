#include "main.h"

/**
 **_strcpy -a function that copies the string pointed
 *@dest: is a string
 *@src: is a string
 *Return: no return
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		*dest[i] = src[i];
		i++;
	}
	_putchar(0);

	return (dest);
}
