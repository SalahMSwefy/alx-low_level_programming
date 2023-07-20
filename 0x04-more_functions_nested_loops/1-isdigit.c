#include "main.h"
/**
 *_isdigit - a function that checks for a digit (0 through 9).
 *@c: is a digit
 *Return: return 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
