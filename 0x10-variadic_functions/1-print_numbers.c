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
	unsigned int i;
	va_list num;

	va_start(num, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(num, unsigned int), separator);
	}

	printf("%d\n", va_arg(num, unsigned int));
	va_end(num);
}
