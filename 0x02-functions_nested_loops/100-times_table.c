#include "main.h"
/**
 *print_times_table - a function that prints the n times table,starting with 0.
 *Return: no return
 */
void print_times_table(int n)
{
	int i, j;
	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{

				int frist = (i * j) / 100;
				int sec = ((i * j) % 100) / 10;
				int last = (i * j) % 10;

				if (frist)
					_putchar(frist + '0');
				else
				{
					if (j != 0)
						_putchar(' ');
				}
				if (!frist && !sec)
				{
					if (j != 0)
						_putchar(' ');
				}
				else
					_putchar(sec + '0');
				_putchar(last + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
