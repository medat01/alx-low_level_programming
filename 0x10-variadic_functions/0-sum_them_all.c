#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum of a variable number of integers.
 * @n: The number of integers to be summed.
 * @...: The list of integers to be summed.
 *
 * Description: This function takes a variable number of integer arguments
 * and returns their sum. It uses the va_list, va_start, and va_arg macros
 * from the stdarg.h header to access the arguments.
 *
 * If the number of arguments (n) is 0, the function returns 0.
 *
 * Return: The sum of the integers.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list numbers;

	if (n == 0)
	{
		return (0);
	}

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);
	return (sum);
}
