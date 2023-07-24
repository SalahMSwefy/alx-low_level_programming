#include "main.h"

/**
 *_puts -a function that print every other character of a string.
 *@str: is a string
 *Return: return
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i+=2;
	}
	_putchar('\n');
}
