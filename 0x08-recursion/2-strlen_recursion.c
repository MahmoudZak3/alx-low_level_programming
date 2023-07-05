#include "main.h"

/**
 * _strlen_recursion ->  Len of a string
 *
 * @s: Inputs
 *
 * Return:  The length measur .
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
