#include "main.h"
/**
 *times_table -  a function that prints the 9 times table, starting with 0.
 *Return: no return
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i * j) + '0');
			if (j != 9)
			{
				_putchar((i % 10) + '0');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}