#include "main.h"

/**
 * times_table - printing  times table, starting with 0
 */
void times_table(void)
{
	int u, v, k;

	for (u = 0; u < 10; u++)
	{
		for (v = 0; v < 10; v++)
		{
			k = v * u;
			if (v == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && v != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
