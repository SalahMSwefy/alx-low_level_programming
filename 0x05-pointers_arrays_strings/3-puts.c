#include "main.h"

/**
 *_puts -a function that print a string.
 *@str: is a string
 *Return: return
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
