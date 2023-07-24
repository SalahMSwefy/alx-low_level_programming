#include "main.h"

/**
 *puts2 -a function that print every other character of a string.
 *@str: is a string
 *Return: return
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (s[i] != 0)
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
