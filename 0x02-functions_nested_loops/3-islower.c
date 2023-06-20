#include "main.h"

/**
 * if char is lowercase return 1, else 0.
 */

int _islower(int t)
{
	if (t >= 'a' && t <= 'z')
		return (1);
	else
		return (0);
}
