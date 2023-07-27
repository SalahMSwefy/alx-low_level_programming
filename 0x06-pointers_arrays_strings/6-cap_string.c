#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: This is the input string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;

	for (i = 1; s[i] != 0; i++)
	{
		if (!((s[i - 1] >= 'a' && s[i - 1] <= 'z') || (s[i - 1] >= 'A' && s[i - 1] <= 'Z') || (s[i - 1] >= '0' && s[i - 1] <= '9')))
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
		}
	}

	return (s);
}
