#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - a function that prints numbers
 *followed by a new line.
 *@separator: the string to be printed between numbers.
 *@n: number of arguments
 *Return:nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list num;

	va_start(num, n);
	if (separator == NULL || *separator == 0)
		s = "";
	else
		s = (char*) separator;

		for (i = 0; i < n; i++)
		{
			if (i == 0)
				printf("%d", va_arg(num, unsigned int));
			else
				printf("%s%d", s, va_arg(num, unsigned int));
		}

	printf("\n");
	va_end(num);
}
