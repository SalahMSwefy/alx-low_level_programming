#include "main.h"

/**
 *_strlen -a function that return the length of a string.
 *@s: is a string
 *Return: return
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}

	return (i);
}
