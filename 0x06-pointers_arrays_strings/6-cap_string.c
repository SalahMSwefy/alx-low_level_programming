#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: This is the input string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0, j, dif = 0;

	char chars[] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n', '\0'};

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;

	for (i = 1; s[i] != 0; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - dif;
		dif = 0;
		for (j = 0; j < 14; j++)
		{
			if (s[i] == chars[j])
			{
				dif = 32;
				break;
			}
		}
	}

	return (s);
}
