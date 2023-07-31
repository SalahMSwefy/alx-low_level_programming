#include "main.h"

/**
 *_strstr - a function that prints the chessboard.
 *@a: the input string to print
 *Return: nothing
 */

void print_chessboard(char(*a)[8])
{
	unsigned int i, j;

	for (i = 0; a[i] != 0; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j];)
		}

		_putchar(10);
	}
}
