#include "main.h"
/**
 *print_line - a function that draws a straight line in the terminal.
 *followed by a new line.
 *@n: is the number of times the character _ should be printed
 *Return: no return
 */
void print_line(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{

		_putchar('_');
		
	}
	_putchar('\n');
}
