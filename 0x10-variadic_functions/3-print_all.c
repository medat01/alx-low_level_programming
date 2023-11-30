#include "variadic_functions.h"
#include "stdio.h"

/**
 * print_all - Prints arguments based on a format string
 * @format: A string containing format specifiers for the arguments
 *           Supported specifiers: 'c' (char), 'i' (integer), 'f' (float),
 *           's' (string). Any other character is ignored
 * @...: The variable arguments to be printed based on the format
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int valid_format;
	const char *ptr = format;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);
	while (format && *ptr)
	{
		c = *ptr;
		valid_format = 1;
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				valid_format = 0;
		}
		if (*(++ptr) && valid_format)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
