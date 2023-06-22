#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - printing  nums from x to 98,
 * ends new line
 * @x: printing start from  nums
 */
void print_to_98(int x)
{
	int u, v;

	if (x <= 98)
	{
		for (u = x; u <= 98; u++)
		{
			if (u != 98)
				printf("%d, ", u);
			else if (u == 98)
				printf("%d\n", u);
		}
	} else if (x >= 98)
	{
		for (v = x; v >= 98; v--)
		{
			if (v != 98)
				printf("%d, ", v);
			else if (v == 98)
				printf("%d\n", v);
		}
	}
}
