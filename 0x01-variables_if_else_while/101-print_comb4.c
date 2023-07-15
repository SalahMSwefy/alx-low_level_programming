#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int c, a, b;

	for (c = 0; c <= 9; c++)
	{
		for (a = 0; a <= 9; a++)
		{
			if (a <= c)
				continue;
			for (b = 0; b <= 9; b++)
			{
				if (b <= a )
					continue;
				putchar(c + '0');
				putchar(a + '0');
				putchar(b + '0');
				if (c == 7)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
