#include "main.h"

/**
 * print_sign - printing num for check.
 * @n: var for  check
 * Return: 1 & print + if x is greater than 0
 * 0 and prints 0 if x is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
