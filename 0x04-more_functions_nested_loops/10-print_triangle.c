#include "main.h"
/**
 * print_triangle - return output a triangle, ending  by a new line
 * @size: triangle size
 */
void print_triangle(int s)
{
	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= s; i++)
		{
			for (j = i; j < s; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
