#include "main.h"

/**
 * print_times_table - printing  x times table, starting by 0
 * @x: nums of  times table
 */
void print_times_table(int x)
{
	int u, v, k;

	if (x >= 0 && x <= 15)
	{
		for (u = 0; u <= x; u++)
		{
			for (v = 0; v <= x; v++)
			{
				k = v * u;
				if (v == 0)
				{
					_putchar(k + '0');
				} else if (k < 10 && v != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
