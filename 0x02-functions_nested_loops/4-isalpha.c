#include "main.h"
/**
 *_isalpha - check if c is an alphabet or not
 *@c: is a character
 *Return: return 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
