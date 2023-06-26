#include "main.h"
#include <stdio.h>

/**
 * print_array - elements of an array prints n .
 * @a: array name
 * @n: the printed array .
 * Return:  inputs
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
