#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	printf("\n");
	return (0);
}
