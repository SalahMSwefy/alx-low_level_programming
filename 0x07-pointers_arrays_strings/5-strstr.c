#include "main.h"

/**
 *_strstr - a function that searches a string for any of a set of bytes.
 *@s: input string
 *@accept: string to check
 *Return: return pointer to the character or null if not
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	char *frist;
	for (i = 0; haystack[i] != 0; i++)
	{
		frist = haystack;
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == 0)
			return (frist);
	}
	return (0);
}
