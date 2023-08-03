#include "main.h"

/**
 *_strlen_recursion - a function that returns the length of a string.
 *@s: string to know it length
 *Return: the length of a string
 */

int _strlen_recursion(char *s)
{

	if (*s == 0)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
