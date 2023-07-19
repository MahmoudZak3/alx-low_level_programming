#include "function_pointers.h"

/**
 * print_name - pointer to function Prints a name.
 * @name: The string to add name to be printed.
 * @f: A pointer that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
