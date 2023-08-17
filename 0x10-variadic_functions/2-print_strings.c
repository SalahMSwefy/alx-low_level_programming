#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - a function that prints strings
 *followed by a new line.
 *@separator: the string to be printed between strings.
 *@n: number of arguments
 *Return:nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s, str;
	unsigned int i;
	va_list strings;

	va_start(strings, n);
	if (separator == NULL || *separator == 0)
		s = "";
	else
		s = (char *) separator;

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			str = "(nil)";
		if (i == n - 1)
			printf("%s\n", str);
		else
			printf("%s%s", str, s);
	}

	va_end(strings);
}
