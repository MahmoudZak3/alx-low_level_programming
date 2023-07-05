#include "main.h"
/**
 * _print_rev_recursion - WritE a string in reverse.
 * @s: a string Output out.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
