#include "function_pointers.h"

/**
 * print_name - Calls a function to print a given name.
 * @name: A pointer to a string containing the name.
 * @f: A pointer to a function that prints a string.
 *
 * This function takes a name and a function pointer as arguments.
 * If both arguments are valid (not NULL), it calls the specified
 * function to print the given name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
