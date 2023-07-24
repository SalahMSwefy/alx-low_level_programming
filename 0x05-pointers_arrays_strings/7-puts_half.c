#include "main.h"

/**
 *puts_half -a function that prints half of a string.
 *@str: is a string
 *Return: return
 */
void puts_half(char *str);
{
	int i = 0, j;

	while (str[i] != 0)
	{
		i++;
	}
	j = (i - 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
