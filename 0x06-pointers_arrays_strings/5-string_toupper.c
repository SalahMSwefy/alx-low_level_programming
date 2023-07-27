#include "main.h"

/**
 * string_toupper - Write a function that changes all lowercase letters
 * of a string to uppercase.
 * @s: This is the input string
 * Return: Lowercase changed to uppercase of the string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}

	return (s);
}
