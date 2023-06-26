#include "main.h"

/**
 * swap_int- to Swap 2 integers.
 * @a:First to be swappe.
 * @b:second to be swappe.
 *
 * Return:void.
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;

}
