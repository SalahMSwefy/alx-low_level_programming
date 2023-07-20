#include "main.h"
/**
 *_isupper - a function that checks for uppercase character
 *@c: is a character
 *Return: return 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
