#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *@s: array to fiil
 *@b: the constant byte which we fiils the memory wihe it
 *@n: the number of bytes
 *return: pointer to array s 
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
