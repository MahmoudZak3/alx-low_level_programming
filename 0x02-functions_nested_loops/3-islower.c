#include "main.h"

/**
 * _islower - check if char is lowercase
 * @t: char to  check .
 * Return:  if char is lowercase 1 , else 0.
 */

int _islower(int t)
{
	if (t >= 'a' && t <= 'z')
		return (1);
	else
		return (0);
}
