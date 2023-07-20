#include "main.h"
/**
 *_isupper - a function that checks for uppercase character
 *@c: is a character
 *Return: return 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (0);
	}
}
