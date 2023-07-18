#include "main.h"
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	string s = "_putchar";

	for (int i = 0; i < s.size(); i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
	return (0);
}
