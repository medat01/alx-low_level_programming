#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Print a variable number of strings with a separator.
 * @separator: The string to be printed between strings (can be NULL).
 * @n: The number of strings to be printed.
 * @...: The variable list of strings to be printed.
 *
 * This function takes a variable number of string arguments and prints them
 * to the standard output, separated by the specified separator string.
 * If separator is NULL, no separator is printed.
 * If a string is NULL, it will be printed as "(nil)".
 *
 * Example usage:
 * print_strings(", ", 3, "apple", "banana", "cherry");
 * Output: apple, banana, cherry
 *
 * @separator: Separator string between strings.
 * @n: Number of strings to be printed.
 * @...: List of strings to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
