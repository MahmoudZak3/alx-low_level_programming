#include "main.h"

/**
 * _isdigit - checking   digits
 * @c: char to be checked
 *
 * Return: 1 if succes or 0 else if not succes 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
