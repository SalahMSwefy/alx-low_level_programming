#include "main.h"
/**
 *print_diagonal - prints a square
 *@n:parameter
 *Return:returns nothing
 */
void print_square(int size)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
