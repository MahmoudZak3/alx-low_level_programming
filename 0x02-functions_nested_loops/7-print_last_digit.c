#include "main.h"

/**
 * print_last_digit - printing last digit of a nums
 * @x: var int to expand  digits from
 * Return: value for num
 */
int print_last_digit(int x)
{
	int b;

	if (x < 0)
	x = -x;

	b = x % 10;

	if (b < 0)
		b = -b;

	_putchar(b + '0');

	return (b);
}
