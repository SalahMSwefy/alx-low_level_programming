#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: This is the input string
 * Return: capitalized string
 */

char *leet(char *s)
{
	int i = 0;
	char c;

	char chars[] = {'A', 'E', 'O', 'T', 'L', '4', '3', '0', '7', '1'};

	for (i = 0; s[i] != 0; i++)
	{
		c = s[i] - dif;

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
