#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Print a variable number of integers with a separator.
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers to be printed.
 * @...: The variable list of integers to be printed.
 *
 * This function takes a variable number of integer arguments and prints them
 * to the standard output, separated by the specified separator string.
 * If separator is NULL, no separator is printed.
 *
 * Example usage:
 * print_numbers(", ", 4, 10, 20, 30, 40);
 * Output: 10, 20, 30, 40
 *
 * @separator: Separator string between numbers.
 * @n: Number of integers to be printed.
 * @...: List of integers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
