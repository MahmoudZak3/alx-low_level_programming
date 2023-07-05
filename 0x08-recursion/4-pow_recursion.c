#include "main.h"

/**
 * _pow_recursion -> value power of int
 *
 * @x: Input Num
 * @y: Power Of Num
 *
 * Return: result Condition
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
