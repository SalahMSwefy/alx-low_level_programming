#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c == 57)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
