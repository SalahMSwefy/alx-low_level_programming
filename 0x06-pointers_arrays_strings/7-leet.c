#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: This is the input string
 * Return: string encoded to 1337
 */

char *leet(char *s)
{
	int i, j;

	char small[] = {'a', 'e', 'o', 't', 'l'};
	char capital[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != 0; i++)
	{

		for (j = 0; j < 5; j++)
		{
			if (s[i] == small[j] || s[i] == capital[j])
			{
				s[i] = num[j];
			}
		}
	}

	return (s);
}
