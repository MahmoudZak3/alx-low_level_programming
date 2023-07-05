#include "main.h"

/**
 * _div -> check if Divisible
 *
 * @n: check nums
 * @i: divisor
 *
 * Return: Divisible num
 */

int _div(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (n / 2 == i)
		return (1);
	i++;
	return (_div(n, i));
}

/**
 * is_prime_number -> prime nums
 *
 * @n: Input Int
 *
 * Return: prime_number
 */

int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (_div(n, i));
}
