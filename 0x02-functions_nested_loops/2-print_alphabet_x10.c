#include "main.h"
/**
 *print_alphabet - function that print alphabet
 *it prints in lowercase
 *Return: no return
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{

		int i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
