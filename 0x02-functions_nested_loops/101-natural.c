#include "main.h"
#include <stdio.h>
/**
 *natural - prints the sum of all the multiples of 3 or 5 below 1024,
 *followed by a new line.
 *Return: no return
 */
int main(void)
{
	int i, x;
	
	x = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			x += i;
	}
	printf("%d\n", x);
	return (0);
}
