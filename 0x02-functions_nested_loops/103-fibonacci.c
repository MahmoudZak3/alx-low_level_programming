#include <stdio.h>

/**
 * main -   sum of  even values terms finding and printing
 * ending by new line .
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u;
	unsigned long int v, k, next, sum;

	v = 1;
	k = 2;
	sum = 0;

	for (u = 1; u <= 33; ++u)
	{
		if (v < 4000000 && (v % 2) == 0)
		{
			sum = sum + v;
		}
		next = v + k;
		v = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
