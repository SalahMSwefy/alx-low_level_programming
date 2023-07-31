#include "main.h"

/**
 *_strspn - a function that gets the length of a prefix substring.
 *@s: input string
 *@accept: string to check
 *Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cnt;

	cnt = 0;
	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[i] != 0;; j++)
		{
			if (s[i] == accept[i])
			{
				cnt++;
				break;
			}
		}
		if (s[i] = !accept[i])
		{
			break;
		}
	}

	return (cnt);
}
