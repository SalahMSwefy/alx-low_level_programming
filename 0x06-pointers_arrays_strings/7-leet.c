#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: This is the input string
 * Return: string encoded to 1337
 */

char *leet(char *s)
{
	int i, j, c;

	char chars[] = {'A', 'E', 'O', 'T', 'L', '4', '3', '0', '7', '1'};

	for (i = 0; s[i] != 0; i++)
	{
		c = s[i] - 32;

		for (j = 0; j < 5; j++)
		{
			if (c == chars[j])
			{
				s[i] = chars[j + 5];
			}
		}
	}

	return (s);
}
