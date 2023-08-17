#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_all - a function that prints anything.
 *@format: is a list of types of arguments passed to the function.
 *Return:nothing
 */

void print_all(const char *const format, ...)
{
	char *s = ", ", *str;
	unsigned int i = 0, n = 0;
	va_list list;

	va_start(list, format);
	while (format && format[n])
		n++;
	while (format && format[i])
	{
		if (i == n - 1)
			s = "";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(list, char), s);
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), s);
				break;
			case 'f':
				printf("%f%s", va_arg(list, float), s);
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, s);
				break;
		}

		i++;
	}

	printf("\n");
	va_end(list);
}
