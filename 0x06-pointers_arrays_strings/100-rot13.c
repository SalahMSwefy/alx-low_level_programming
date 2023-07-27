#include "main.h"

/**
 * rot13 - a function that encodes a string into rot13.
 * @s: This is the input string
 * Return: string encoded to rot13
 */

char *rot13(char *s)
{
	int i, j;

	char real[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (s[i] == real[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}

	return (s);
}
