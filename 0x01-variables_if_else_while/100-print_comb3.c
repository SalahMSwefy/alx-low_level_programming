#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int c, a;

	for (c = 0; c <= 9; c++)
	{
		for (a = 0; a <= 9; a++)
		{
			if (a <= c)
				continue;
			putchar(c + '0');
			putchar(a + '0');
			if (c == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
