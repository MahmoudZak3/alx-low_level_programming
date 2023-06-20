#include "main.h"

/**
 * _islower - check the chars if lowercase or not .
 * @t: char to  check if lower or not.
 * Return: 1 if the character is lowercase , else 0 returned.
 */

int _islower(int t)
{
	if (t >= 'a' && t <= 'z')
		return (1);
	else
		return (0);
}
