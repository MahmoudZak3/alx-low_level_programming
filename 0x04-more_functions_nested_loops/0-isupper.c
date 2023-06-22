#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: chars for checking
 *
 * Return: 1 if succes or 0 else if not succes Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
