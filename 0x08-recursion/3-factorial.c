#include "main.h"

/**
 * factorial - Nums factorial
 * @n: Nums to return a factorial from
 *
 * Return: factorial of num
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
