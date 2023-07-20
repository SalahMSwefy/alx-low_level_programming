#include "main.h"
/**
 *print_line - a function that draws a straight line in the terminal.
 *followed by a new line.
 *@n: parameter
 *Return: no return
 */
void print_line(int n)
{
	while(n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
