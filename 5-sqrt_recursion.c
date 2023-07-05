#include "main.h"

/**
 * _sqrt -> num Square root
 *
 * @n: Input Nums
 * @i: Param
 *
 * Return: Depend root Condition
 */

int _sqrt(int n, int i)
{
	if (n < 0 || i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	i++;
	return (_sqrt(n, i));
}

/**
 * _sqrt_recursion -> Square root main
 *
 * @n: Input Nums
 *
 * Return: Square Root .
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
